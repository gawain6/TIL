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
    update = f'<a href="update.py?id={pageID}">update</a>'
    delete_action = f'''
        <form action="process_delete.py" method="post">
            <input type="hidden" name="pageID" value="{pageID}">
            <input type="submit" value="delete">
        </form>
    '''
else:
    pageID = 'Welcome'
    description = 'Hello, web'
    update = ''
    delete_action=''

print("Content-Type: text/html\n")
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
    <a href="create.py">create</a>
    {update}
    {delete_action}
    <p>{description}</p>
</body>
</html>
''')