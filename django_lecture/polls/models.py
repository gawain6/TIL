from django.db import models
from django.utils import timezone

import datetime

# Model : DB에 어떤 데이터를 어떤 형식으로 저장할 것이냐?
# 쿼리문을 몰라도 데이터베이스 테이블을 만들 수 있다.
# 쿼리문을 이용해서 작성할 수 있다.
# 다른 언어에서 작성된 것을 모델로 포팅할 수 있다.
# 모델이름 : 테이블이름
# 모델의 필드 : 컬럼 -> 데이터의 형식, 제약조건
# 제약조건: 정수, 실수, 글자, 길이없는 텍스트, 날짜
# 모델을 쓰는 장점
# 모델의 필드 -> 프론트에서 사용하는 폼 태그의 종류와 제약조건

# 장고는 DB 의존성이 낮다. -> 특정 DB가 아니어도 동작 가능하다.
# ~에 대한 의존성이 높다. -> ~가 아니면 정상 동작하지 않는다.

# 1. 모델만들기 : 필드의 종류와 제약조건 설정
# models.py 에 클래스를 추가한다.

# 2. 변경 사항 추적하기 : 모델을 읽어서 DB에 반영할 사항을 파일로 작성 (polls/migrations 디렉토리에 작성됨)
# python manage.py makemigrations [앱이름]
# ex) python manage.py makemigrations polls

# 어떤 쿼리가 실행될지 알고 싶다면?
# python manage.py sqlmigrate polls 0001
# 언제 쓰임? -> 어떤 쿼리가 실행될지 알고 싶을 때. slow 쿼리인지 여부 확인할 때. 튜닝이 필요한 쿼리 인지 여부 확인할 때.
# 튜닝이 필요한 이유? 모델로 작성한 쿼리문이 느리거나 할 때 필요하다.

# 3. 변경 사항 적용하기 : 변경 사항 파일을 읽어서 쿼리 실행
# python manage.py migrate [앱이름] [마이그레이션 번호]
# ex) python manage.py migrate polls 0001

# DBMS : 쿼리를 쓰지 않고 각 DB를 관리하기 위한 툴(?)
# 데이터베이스가 뻗어버려도 관리자 접속을 위한 리소스는 남겨서 관리자는 들어가서 관리가 가능하다.
# SQLlite viewer
# MySQL : Workbench

class Question(models.Model):
    # 필드들은 옵션을 지정하지 않으면 무조건 필수 필드가 된다.
    # blank=True => ''
    # null=True => null
    question_text = models.CharField(max_length=200) # 텍스트 최대 길이를 200으로 설정.
    pub_date = models.DateTimeField('date published')
    def __str__(self):
        return self.question_text
    def was_published_recently(self):
        return self.pub_date >= timezone.now() - datetime.timedelta(days=1)

class Choice(models.Model):
    question = models.ForeignKey(Question, on_delete=models.CASCADE)
    choice_text = models.CharField(max_length=200)
    votes = models.IntegerField(default=0)
    def __str__(self):
        return self.choice_text

class Bmi(models.Model):
    name_text = models.CharField(max_length=50, default='jane')
    height = models.IntegerField()
    weight = models.DecimalField(max_digits=5, decimal_places=2)
    def __str__(self):
        return self.name_text