"""
import 구문 순서
각 다른 블록들 끼리는 한 라인 띄운다.
1. 파이썬 기본 모듈들 (import random, os 등..)
2. 3rd-party 모듈들 (import django.contrib 등..)
3. 내가 만든 모듈들 (import .models 등..)
"""
# Register your models here.

from django.contrib import admin

from .models import Question, Choice, Bmi

# admin 페이지에 Question, Choice 모델 추가
admin.site.register(Question)
admin.site.register(Choice)

admin.site.register(Bmi)
