# 웹 페이지에 접근해서 데이터를 가져온다.
# requests는 ajax로 받아온 데이터를 실시간으로 반영할 수 없다.
# requests로 받아온 데이터는 소스보기에서 보는 소스까지만 있다.

# selenium : 웹 브라우저를 원격 조작하는 방식의 크롤러
# selenium, scrapy 등 상황에 따라 사용하는 크롤러가 많다.

"""

셀렉터
HTML 태그
1) Container Tag : <div>내용</div>
2) Empty Tag : <img src="이미지주소">

단일 셀렉터
<div id="super" class="test" data-rel="" data-num="">cont</tag>
tag이름 : div
id : #super (한 페이지 내에서 중복될 수 없음)
class : .test (한 페이지 내에서 중복될 수 있다)

다중 셀렉터
~안에 있는 무엇
1. div ul li.ah_k : 중간 경로를 생략해도 된다. div li.ah_k 가능
2. div > ul > li.ah.k : 중간 경로 생략 불가능

~이고 ~인 것
<span class="ah_k">???</span>
<div class="ah_k">!!!</span>
<div class="ah_k ah_l">###</span>
span.ah_k --> ???
div.ah_k --> !!!
div.ah_k.ah_l --> ###

~의 근처에 있는 것
"""

import requests

# 가져온 데이터를 HTML로 해석한다.
from bs4 import BeautifulSoup

# 수집하고자 하는 url 정보를 변수에 저장.
# URL encoding
url = "https://www.naver.com/"

# HTTP Method : Get, Post, Put, Head, Delete 5개 있음
# Get : 리소스 얻기
# Post : 데이터 전달 - 로그인, 회원가입, 글쓰기 ---- 수정
# Put : 리소스 전달 - 사진 올리기 ----------- 최초업로드
# Delete : 리소스 삭제
# Head : Method 확인
# Postman 이라는 익스텐션 OR 애플리케이션 - 설치 (method 확인)

req = requests.get(url)
print(req.status_code) # 200 등 출력
print(type(req.status_code))

if req.status_code==requests.codes.ok: # requests.codes.ok == 200
    print("접속 성공")
    # 데이터 해석
    # print(req.text) # .text는 태그를 제외한 텍스트만 출력할 수 있음
    html = BeautifulSoup(req.text, "html.parser")
    # span1 = html.select('span') # span태그들을 list로 저장 및 출력
    # span2 = html.select_one('sapn') # 하나의 span 태그를 가져오기

    items = html.select('.PM_CL_realtimeKeyword_list_base .ah_item')
    # keyword = html.select('.PM_CL_realtimeKeyword_list_base .ah_k')
    for i in items:
        # ~어떤 요소를 찾고 그 요소 안에 각각의 요소를 다시 찾을 수 있다.
        keyword = i.select_one('.ah_k')
        rank = i.select_one('.ah_r')
        link = i.select_one('.ah_a')
        print(rank.text, keyword.text, link['href'])

        # 속성값 추출하기
        # print(rank.attr['class'])
        # print(rank['class'])
else:
    print("접속 실패")