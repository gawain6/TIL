#!/usr/bin/python3
import cgi
import os

files = os.listdir("data/")
listStr=''
for item in files:
    string=item[:-4]
    listStr += '<li><a href="index.py?id='+string+'">'+string.upper()+'</a></li>'

form = cgi.FieldStorage()

if 'id' in form:
    pageID = form['id'].value
    description = open('data/'+pageID+'.txt', 'r').read()
else:
    pageID = 'Welcome'
    description = 'Hello, web'

print("Content-Type: text/html")
print()
print(f'''<!doctype html>
<html>
<head>
    <title>WEB1 - Welcome</title>
    <meta charset="utf-8">
</head>
<body>
    <h1><a href="index.py">WEB</a></h1>
    <ol>
        {listStr}
    </ol>
    <form action="process_update.py" method="post">
        <input type="hidden" name="pageID" value="{pageID}">
        <p><input type="text" name="title" placeholder="title" value="{pageID}"></p>
        <p><textarea rows="4" name="description" placeholder="description">{description}</textarea></p>
        <p><input type="submit" name="save"></p>
    </form>
</body>
</html>
''')