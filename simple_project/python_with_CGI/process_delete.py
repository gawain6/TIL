#!/usr/bin/python3
import cgi, os

form = cgi.FieldStorage()
pageID = form['pageID'].value

os.remove('data/'+pageID+'.txt')

print("Location: index.py")
print()