"""
CGI
Common Gateway Interface
CGI 단점 : 요청이 있을 때마다 프로세스를 새로 실행

CGI 장점 : 특별한 추가 프로그램 없이도 여러 언어의 스크립트 실행 가능
"""

import http.server
PORT = 8000

class Handler(http.server.CGIHTTPRequestHandler):
    cgi_directories = ['/cgi'] # cgi 디렉토리 내 있는 파일만 실행 가능하도록 설정

with http.server.HTTPServer(("",PORT), Handler) as httpd:
    print("serving at port", PORT)
    httpd.serve_forever()