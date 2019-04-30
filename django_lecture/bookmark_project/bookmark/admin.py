# admin12345

from django.contrib import admin

from .models import Bookmark

# admin.py : 관리자 페이지를 커스터마이징
# 관리자 페이지에서 관리할 모델을 등록
# 관리자 페이지를 커스터마이징
# 옵션 클래스를 만들어서 추가

class BookmarkOptions(admin.ModelAdmin):
    list_display = ['id', 'site_name', 'url'] # 표 형식으로 admin 출력
    # list_editable = ['site_name', 'url'] # 목록에서 바로 수정이 되도록 한다. (되도록 안쓰는게..)
    # list_filter = ['url'] # 대부분 Datetime필드가 있을 경우 많이 사용. 북마크에서는 쓸 일이 없을듯..
    search_fields = ['site_name', 'url'] # ForeignKey 필드 같은 다른 테이블을 참조하는 항목은 사용하지 않는다.

# 관리자 페이지에서 관리할 모델을 등록
admin.site.register(Bookmark, BookmarkOptions)