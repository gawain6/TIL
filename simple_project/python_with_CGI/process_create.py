#!/usr/bin/python3
import cgi

form = cgi.FieldStorage()

title = form['title'].value
desc = form['description'].value

opened_file = open('data/'+title+'.txt', 'w')
opened_file.write(desc)
opened_file.close()

print("Location: index.py?id="+title)
print()