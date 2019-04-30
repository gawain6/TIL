# admin12345

from django.contrib import admin

from .models import Bookmark

# admin.py : 관리자 페이지를 커스터마이징

# 관리자 페이지에서 관리할 모델을 등록
admin.site.register(Bookmark)