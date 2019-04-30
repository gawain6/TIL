from django.shortcuts import render

# 뷰 종류
# 클래스형 뷰, 함수형 뷰는 상호 기능 제약이 거의 없다. => '이건 무조건 ~~형 뷰여야되' 라는 것이 없다.

# CRUDL에 특별한 처리를 추가해야 되는 경우
# 함수형뷰는 자유도가 클래스형 뷰에 비해서 높다.
# 처리할 코드를 직접 개발자가 작성해야 한다.
# 함수형 : def 뷰이름(request[, 추가 인수]):
#               처리할 내용

# CRUDL 에 관련 기능은 자주 사용하기 때문에 장고에서 제네릭
# 클래스형뷰는 생산성이 함수형뷰에 비해 높다.
# 제네릭 기능 외에 추가 적인 기능을 개발자가 작성한다.
# 메서드 방식 - 커스터마이징에 관련된 메서드를 찾아야 한다.
# 클래스형 : class 뷰이름(제네릭뷰):
#               처리할 내용

# CRUD_L
from django.views.generic.list import ListView
from .models import Bookmark

# 클래스형 뷰의 이름은 자유
class BookmarkList(ListView):
    model = Bookmark
    # 템플릿 기본이름 : _list
    # 여타 다른 옵션들
    # 템플릿 종류, 읽어오는 데이터, 페이지네이션을 걸거나, 검색 쿼리를 적용하거나, 권한 체크..

# CRUD_C
from django.views.generic.edit import CreateView
class BookmarkCreate(CreateView):
    model = Bookmark
    # fileds는 사용자가 입력할 모델 필드를 정하는 것
    fields = ['site_name', 'url']
    # 템플릿 기본 이름 : _form
    template_name_suffix = '_create'
    success_url = '/'

# CRUD_U
from django.views.generic.edit import UpdateView
class BookmarkUpdate(UpdateView):
    model = Bookmark
    fields = ['site_name', 'url']
    # 템플릿 기본 이름 : _form
    template_name_suffix = '_update'
    success_url = '/'

# CRUD_D
from django.views.generic.edit import DeleteView
class BookmarkDelete(DeleteView):
    model = Bookmark
    # 템플릿 기본 이름 : _confirm_delete
    # 템플릿 이름 변경
    template_name_suffix = '_delete'
    success_url = '/'

# CRUD_R
from django.views.generic.detail import DetailView
class BookmarkDetail(DetailView):
    model = Bookmark
    # 템플릿 기본 이름 : _detail

# 뷰를 만들었다 -> URL 연결