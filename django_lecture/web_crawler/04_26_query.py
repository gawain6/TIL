from http.server import BaseHTTPRequestHandler, HTTPServer
from urllib.parse import parse_qs, urlparse # 주소 해석해주는 모듈

PORT = 8000

class Handler(BaseHTTPRequestHandler):
    def do_GET(self): # GET 방식으로 데이터를 받을 때
        # 404 page도 꾸며서 고객들을 외부에 유출시키지 않게 하는 것이 요즘 추세
        self.send_response(200)
        self.send_header('Content-type', 'text/html;charset=utf-8')
        self.end_headers()

        query_text = urlparse(self.path).query # urlparse가 주소를 쪼개서 분석해주고 .query를 붙이면 가져올 수 있음
        print(query_text)
        query_vars = parse_qs(query_text) # query string을 딕셔너리로 바꿔줌. 같은 키에 여러 값이 올 수 있으므로 value가 리스트이다.
        print(query_vars)
        form_html = """
            <form action='' method='post'>
                <label>Weight:<input type='text' name='weight'></label><br>
                <label>Height:<input type='text' name='height'></label><br>
                <input type='submit' value='Calc'>
             </form>
         """

        # 1. 딕셔너리를 다룰 수 있나?
        # 2. 변수형에 대해 인지하고 있는가?
        # 3. 연산에 대해 알고 있는가?
        # query string으로 키와 몸무게를 전달받아서
        # bmi를 계산해서 message를 출력하시오
        # 산출된 값이 18.5 이하면 저체중, 18.5~23은 정상, 23~25는 과체중, 25~30은 비만, 30이상은 고도비만으로 나누어진다.

        if 'weight' in query_vars and 'height' in query_vars:
            h = int(query_vars['height'][0])/100
            w = int(query_vars['weight'][0])

            bmi = "%0.2f" % (w / (h**2))

            if float(bmi) <= 18.5:
                message = str(f'{bmi} : 저체중')
            elif float(bmi) >= 18.5 and float(bmi) <= 23:
                message = str(f'{bmi} : 정상체중')
            elif float(bmi) >= 23 and float(bmi) <= 25:
                message = str(f'{bmi} : 과체중')
            elif float(bmi) >= 25 and float(bmi) <= 30:
                message = str(f'{bmi} : 비만')
            elif float(bmi) >= 30:
                message = str(f'{bmi} : 고도비만')
        else:
            message = form_html

        self.wfile.write(bytes(message,"utf-8")) # 파일 처럼 내용 보내기
        return

    def do_POST(self): # 변수들이 GET 처럼 URL에 표시되어 오는 것이 아니라 파일 형식으로 옴
        content_length = int(self.headers.get('Content-Length')) # 자료가 몇 바이트인지 알아오기
        post_body = self.rfile.read(content_length) # 리퀘스트 알파일을 파일처럼 불러옴
        queries = parse_qs(post_body.decode('utf8')) # 파일 읽기
        print(queries)

        if 'weight' in queries and 'height' in queries:
            h = int(queries['height'][0])/100
            w = int(queries['weight'][0])

            bmi = "%0.2f" % (w / (h**2))

            if float(bmi) <= 18.5:
                message = str(f'{bmi} : 저체중')
            elif float(bmi) >= 18.5 and float(bmi) <= 23:
                message = str(f'{bmi} : 정상체중')
            elif float(bmi) >= 23 and float(bmi) <= 25:
                message = str(f'{bmi} : 과체중')
            elif float(bmi) >= 25 and float(bmi) <= 30:
                message = str(f'{bmi} : 비만')
            elif float(bmi) >= 30:
                message = str(f'{bmi} : 고도비만')
        else:
            message = 'No data'

        self.send_response(200)
        self.send_header('Content-type', 'text/html;charset=UTF-8')
        self.end_headers()

        self.wfile.write(bytes(message, "utf-8")) # 파일 처럼 내용 보내기
        return

# 한 페이지에서 접속 Method에 따라 기능을 분기
# 회원 가입 페이지 domain.com/signup/
# GET : 회원가입 양식 보여주기
# POST : 전달받은 데이터를 처리해서 회원가입 진행하기(데이터베이스에 저장하기)
# do_GET vs do_POST

def run():
    server_address = ('127.0.0.1', PORT)
    httpd = HTTPServer(server_address, Handler)
    print("serving at PORT", PORT)
    httpd.serve_forever()

run()