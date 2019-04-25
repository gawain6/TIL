import requests, json

custom_headers = {
    # 요청 주소 설정하기
    'referer' : 'https://www.daum.net',
    # 웹브라우저 버전명 설정
    'user-agent' : "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/73.0.3683.103 Safari/537.36"
}

url = 'http://finance.daum.net/api/quote/A020560/days?symbolCode=A020560&page=1&perPage=10'

req = requests.get(url, headers=custom_headers)
if req.status_code==requests.codes.ok:
    print("접속 성공")
    stock_data = json.loads(req.text)
    for daily_data in stock_data['data'][:5]:
        print(daily_data['date'], daily_data['tradePrice'])

else:
    print("접속 실패")