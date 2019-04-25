from django.urls import path

from . import views

# 2차 URL 라우팅
# list/

urlpatterns = [
    # path('url pattern', view, name='url pattern name'),
    path('', views.index, name='index'),
    path('welcome/', views.welcome, name='welcome'),
    # ex: /polls/5/
    # urlpattern : index/
    # urlpattern2 : <question_id>/ <- 생략되었으면 문자열 url
    # urlpattern3 : <int:question_id>/ <- int 함수를 추가(타입이 아님)하면 숫자로 이루어진 url
    # ex) <slug:category_name>/<int:product_id>
    # <int:password>/view/ : 특정 숨겨진 페이지 만들 때 이런 식으로 만듬.
    path('<int:question_id>/', views.detail, name='detail'),
    # ex: /polls/5/results/
    path('<int:question_id>/results/', views.results, name='results'),
    # ex: /polls/5/vote/
    path('<int:question_id>/vote/', views.vote, name='vote'),
]