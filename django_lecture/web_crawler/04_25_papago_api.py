import requests
import json

client_id = "tLLm6bQmMKUXCxsdRECS"
client_secret = "R4K_OiFty8"

custum_header = {
    "X-Naver-Client-Id":client_id,
    "X-Naver-Client-Secret":client_secret,
}

# encText = input("번역할 문장을 입력하세요 : ")
encText = "안녕하세요."
# data = "source=ko&target=en&text=" + encText
data = {
    "source":"ko",
    "target":"en",
    "text":encText,
}

url = "https://openapi.naver.com/v1/papago/n2mt"
req = requests.post(url, headers=custum_header, data=data)

if req.status_code==requests.codes.ok:
    print("접속 성공")
    trans_data = json.loads(req.text)
    print(trans_data['message']['result'])
else:
    print("실패")