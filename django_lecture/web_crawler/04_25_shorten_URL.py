# import urllib.request

import requests, json

client_id = "noZlfc2QOgwslTewNQdd"
client_secret = "PglO2AhWs0"

custum_header = {
    "X-Naver-Client-Id":client_id,
    "X-Naver-Client-Secret":client_secret,
}

encText = "https://developers.naver.com/docs/utils/shortenurl"
data = {
    "url":encText,
}

# encText = urllib.parse.quote("https://developers.naver.com/docs/utils/shortenurl")
# data = "url=" + encText
url = "https://openapi.naver.com/v1/util/shorturl"
req = requests.post(url, headers=custum_header, data=data)


# request = urllib.request.Request(url)
# request.add_header("X-Naver-Client-Id",client_id)
# request.add_header("X-Naver-Client-Secret",client_secret)
# response = urllib.request.urlopen(request, data=data.encode("utf-8"))
# rescode = response.getcode()

# if(rescode==200):
#     response_body = response.read()
#     print(response_body.decode('utf-8'))
# else:
#     print("Error Code:" + rescode)

if req.status_code==requests.codes.ok:
    print("접속 성공")
    shorten_data = json.loads(req.text)
    print(f'url: {shorten_data["result"]["url"]}, orgUrl: {shorten_data["result"]["orgUrl"]}')
else:
    print("실패")