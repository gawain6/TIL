"""
메뉴1 : 조회 급등 항목 10개의 현재가 출력
메뉴2 : 1) 종목 코드를 입력받고 2) 해당 종목의 1페이지 주가 출력

1. 메뉴 구현하기
2. 1번 메뉴에 대한 크롤러
    2-1. 조회 급등 항목 10개 찾기
    2-2. 그 항목 1개에 대한 데이터 찾아서 출력
    2-3. 총 10개 항목에 대한 데이터 찾아서 출력
3. 2번 메뉴에 대한 크롤러
    3-1. 아무 항목이나 고정. 1페이지 주가 출력
    3-2. 사용자에게 종목 코드 입력받아서 출력하기
    
4. 데이터 엑셀로 저장하기
"""

import requests, json

from bs4 import BeautifulSoup

custom_headers = {
    # 요청 주소 설정하기
    'referer' : 'https://www.daum.net',
    # 웹브라우저 버전명 설정
    'user-agent' : "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/73.0.3683.103 Safari/537.36"
}

def surging_item():
    # url 찾는 방법 : F12 - Network(XHR) - Name에서 원하는 정보 찾기(Preview에서 데이터 조회) - Headers의 Request URL
    url = 'http://finance.daum.net/api/search/ranks?limit=10'
    req = requests.get(url, headers=custom_headers)
    if req.status_code == requests.codes.ok:
        print("접속 성공")
        ranking_data = json.loads(req.text)
        for rank in ranking_data['data'][:10]:
            print(rank['rank'], rank['name'], rank['symbolCode'])
            print(get_stock_price(rank['symbolCode']))
    else:
        print("접속 실패")

def get_stock_price(stock_code):
    url = 'http://finance.daum.net/api/quote/'+str(stock_code)+'/days?symbolCode='+str(stock_code)
    req = requests.get(url, headers=custom_headers)
    data = json.loads(req.text)
    current_data = data['data'][0]['tradePrice']
    return current_data
    # return data

def view_item(item):
    code = find_code(item)
    # url = 'http://finance.daum.net/api/quotes/'+code+'?summary=false&changeStatistics=true'
    url = 'http://finance.daum.net/api/quote/'+code+'/days?symbolCode='+code+'&page=1&perPage=10&pagination=true'
    req = requests.get(url, headers=custom_headers)
    data = json.loads(req.text)
    # print(data['data'][3])
    for i in range(7):
        print(data['data'][i]['date'], data['data'][i]['tradePrice'])


def find_code(item):
    url = 'http://finance.daum.net/api/search/quotes?q='+item
    req = requests.get(url, headers=custom_headers)
    code = json.loads(req.text)
    return code['quotes'][0]['symbolCode']

if __name__ == '__main__':
    print('1. 조회 급등 항목 10개 2. 원하는 종목 주가 출력 > ', end='')
    select = input()
    if select=='1':
        surging_item()
    else:
        print('원하는 항목 > ', end='')
        item = input()
        view_item(item)