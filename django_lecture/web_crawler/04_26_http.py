"""
오늘 한 이러한 서버는 apache, nginx 보다 성능상 좋지 않음. 잠깐 테스트 하는 용도.

HTTP Server

1) 브라우저를 통해 사용자가 HTTP Request Message를 보내면
2) 서버는 그 Message를 해석하고 Response Message로 응답한다.
    2-1) 어느 페이지로 접속했느냐?
    2-2) Quesry String은 어떤 데이터를 가지고 있느냐?
    2-3) 특정 스크립트 요청이 있느냐?
    2-4) 최종 응답을 HTML로 할 것인지? 그리고 다운로드는 파일로 할것인지?를 결정해야 한다.
"""

# 첫번째 서버는 HTTP Response만 하는 서버

import http.server
import socketserver

# 서버에 접속하는 포트 번호
PORT = 8000

#핸들러는 요청이 들어오면 어느 객체가 요청을 해석하고 처리할것인지를 정한다.
Handler = http.server.SimpleHTTPRequestHandler

with socketserver.TCPServer(("",PORT), Handler) as httpd:
    print("serving at PORT", PORT)
    httpd.serve_forever()