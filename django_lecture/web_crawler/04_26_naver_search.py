from http.server import BaseHTTPRequestHandler, HTTPServer
from urllib.parse import parse_qs, urlparse  # 주소 해석해주는 모듈
import requests
from bs4 import BeautifulSoup

PORT = 8000

custom_headers = {
    # 요청 주소 설정하기
    'referer' : 'https://www.daum.net',
    # 웹브라우저 버전명 설정
    'user-agent' : "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/73.0.3683.103 Safari/537.36"
}

class Handler(BaseHTTPRequestHandler):
    def do_GET(self):  # GET 방식으로 데이터를 받을 때
        self.send_response(200)
        self.send_header('Content-type', 'text/html;charset=utf-8')
        self.end_headers()

        form_html = """
            <form action='' method='post'>
                <label>naver search:<input type='text' name='search'></label>
                <input type='submit' value='search'>
             </form>
         """

        self.wfile.write(bytes(form_html, "utf-8"))  # 파일 처럼 내용 보내기
        return

    def do_POST(self):  # 변수들이 GET 처럼 URL에 표시되어 오는 것이 아니라 파일 형식으로 옴
        content_length = int(self.headers.get('Content-Length'))  # 자료가 몇 바이트인지 알아오기
        post_body = self.rfile.read(content_length)  # 리퀘스트 알파일을 파일처럼 불러옴
        queries = parse_qs(post_body.decode('utf8'))  # 파일 읽기
        # print(queries)

        if queries:
            url = 'https://search.daum.net/search?w=tot&DA=YZR&t__nil_searchbox=btn&sug=&sugo=&q='+queries['search'][0]
            req = requests.get(url, headers=custom_headers)
            if req.status_code==requests.codes.ok:
                print('접속 성공')
                html = BeautifulSoup(req.text, "html.parser")
                message = str(html)
            else:
                print('접속 실패')
        else:
            message = 'No data'

        self.send_response(200)
        self.send_header('Content-type', 'text/html;charset=UTF-8')
        self.end_headers()

        self.wfile.write(bytes(message, "utf-8"))  # 파일 처럼 내용 보내기
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