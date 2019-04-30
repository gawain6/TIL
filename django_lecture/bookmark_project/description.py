"""
1. 파이썬 프로젝트 만들기
2. 장고 설치
3. 장고 프로젝트 만들기 : django-admin startproject config .
4. db 초기화 : python manage.py migrate
5. 관리자 계정 생성 : python manage.py createsuperuser
6. 기본 앱 만들기 : python manage.py startapp bookmark
7. INTALLED_APPS 에 추가 : bookmark (없어도 뷰는 동작함)
--- 템플릿 폴더 검색, DB 변경사항 추적

앱
(custom field)
1. models.py 작성
--- 필드 => DB에 컬럼 -> 컬럼의 데이터 타입, 제약조건
integerField
(forms.py 작성 : db에 저장되지 않는 정보들)
--- Bookmark site_name, url, created 만 작성시 forms.py 작성하지 않아도 됨
--- ex) User username, password, first_name, last_name, created
2. views.py 작성
(context_processor 작성) : 모든 페이지(템플릿 파일 전체)에 출력될 내용
--- ex) 장바구니, user
(custom template tag)
--- 템플릿 엔젠에서 지원하느 태그 외에, 개발자가 추가로 필요한 기능
3. appname/urls.py 작성 -> config/urls.py 작성
4. template 만들기
--- appname/templates/appname/
5. views.py CRUDL 추가
--- Create, Update의 fields 속성 값 넣기
--- fileds는 사용자가 입력할 모델 필드를 정하는 것
--- app_name/urls.py 연결
6. 템플릿 html 만들고, 내용 작성
7. 추가, 수정, 삭제의 경우 해당 기능을 완료한 후에 이동할 페이지가 필요하다
--- views.py에 success_rul 이라는 속성값을 지정
--- model에 get_absolute_url이라는 메서드를 만든다.
8. 템플릿 분리와 확장
--- 중복된 내용을 따로 빼놓아서 관리한다.
--- layout/base.html 작성(디렉토리명은 자유, base.html 꼭 같아야함)
--- config/settings.py 템플릿의 DIRS 내용 추가
TEMPLATES = [
    {
        'BACKEND': 'django.template.backends.django.DjangoTemplates',
        'DIRS': [os.path.join(BASE_DIR, 'layout')],
        ...
]

*======================================================*

검색 엔진에 잘 걸리게 하려면?

SEO - Search Engine Optimization

프론트 친구들이 해야 할 작업
--- HTML 표준에 맞춰야 함
--- Meta Tag
--- OpenGraph

내가 해야할 작업
--- 위에 들어갈 내용들을 넘겨주는 것

*======================================================*

# localhost/bookmark/1 : 글보기, 수정, 삭제
# localhost/bookmark/create : 글쓰기
# 'bookmark/<value>/' : 위 두 url에 해당됨 => 모든 url은 문자열로 해석됨
# 'bookmark/<int:value>/' : 첫 번째 url만 해당됨
# int : 정수
# str : 문자 (기본값)
# uuid : application 호출 (ex. 스마트폰 서핑 중 앱이 호출 될 때)
# slug : 여러 단어를 뭉쳐서 주소로 만듬(ex. 30-percent-high) -> seo 때문에 많이 씀
# path : 'bookmark/<path:value>/' => bookmark/19/04/29
# 위의 기본 converter를 제외한 형태가 필요하다면 custom converter를 만든다.

"""