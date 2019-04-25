from django.shortcuts import render, get_object_or_404
# from django.template import loader # 요거 잘 안씀. render를 잘 씀.
from django.http import HttpResponse

from .models import Question

# 뷰 : 클래스형 뷰, 함수형 뷰
# def [뷰이름] (request):
#   return HttpResponse('내용')

def index(request):
    # # 모델.objects : 디폴트 매니저. 객체.(객체들 아님)
    # latest_question_list = Question.objects.order_by('-pub_date')[:5]
    # # html 파일을 장고 파일에서 분리하는 것을 템플릿 시스템이라고 한다.
    # output = ', '.join([q.question_text for q in latest_question_list])
    # return HttpResponse(output)

    latest_question_list = Question.objects.order_by('-pub_date')[:5]
    context = {'latest_question_list': latest_question_list}
    # 템플릿 시스템 : templates/앱이름/ 으로 디렉토리 구성.
    # render(request, 템플릿, 템플릿_변수) : html 파일을 해석해서 출력함.
    return render(request, 'polls/index.html', context)

def welcome(request):
    return HttpResponse("Hello, world. You're at the polls index.")

# detail 뷰 : 매개변수가 question_id를 받는다.
# 함수형 뷰는 기본적으로 request라는 매개변수를 받는다.
def detail(request, question_id):
    question = get_object_or_404(Question, pk=question_id)
    return render(request, 'polls/detail.html', {'question': question})

def results(request, question_id):
    response = "You're looking at the results of question %s."
    return HttpResponse(response % question_id)

def vote(request, question_id):
    return HttpResponse("You're voting on question %s." % question_id)

"""
welcome 이라는 뷰를 만들고
127.0.0.1:8000/polls/welcome/

내용은
Welcome first django page
텍스트가 출력되는 페이지를 작성하세요.
"""