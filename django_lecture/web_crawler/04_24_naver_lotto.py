import requests

from bs4 import BeautifulSoup

url = "https://search.naver.com/search.naver?sm=top_hty&fbm=1&ie=utf8&query=%EB%A1%9C%EB%98%90+%EB%8B%B9%EC%B2%A8%EB%B2%88%ED%98%B8"

custom_headers = {
    # 요청 주소 설정하기
    'referer' : 'https://www.naver.com',
    # 웹브라우저 버전명 설정
    'user-agent' : "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/73.0.3683.103 Safari/537.36"
}

req = requests.get(url, headers=custom_headers)
if req.status_code==requests.codes.ok:
    print("접속 성공")
    html = BeautifulSoup(req.text, "html.parser")
    lotto = html.select('.lotto_wrap .num_box .num')
    for n in lotto[:6]:
        print(n.text, end=', ')
    print("보너스 번호: ", lotto[-1].text)

else:
    print("접속 실패")