from django.urls import path
from .views import BookmarkList, BookmarkCreate, BookmarkDelete, BookmarkDetail, BookmarkUpdate

# namespace 이름 공간
# 다른 앱들과 url pattern 이름이 겹치는 것을 방지하기 위해서 사용
# 2.0대 이전 에는 namespace라는 인수가 존재
app_name = 'bookmark' # 꼭 앱 이름과 같지 않아도 된다
urlpatterns = [
    # path(url pattern, view, url pattern name, name(생략가능)),
    # 함수형 뷰 : 이름만
    # 클래스형 뷰 : 이름.as_view()
    # <pk>는 뷰에 전달해주는 변수라고 생각하셈
    # path, uuid, slug, int, str : converter
    # slug : 여러 단어를 뭉쳐서 주소로 만듬
    path('', BookmarkList.as_view(), name='index'),
    path('create/', BookmarkCreate.as_view(), name='create'),
    path('detail/<int:pk>/', BookmarkDetail.as_view(), name='detail'),
    path('update/<int:pk>/', BookmarkUpdate.as_view(), name='update'),
    path('delete/<int:pk>/', BookmarkDelete.as_view(), name='delete'),
]