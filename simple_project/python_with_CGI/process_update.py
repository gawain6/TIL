#!/usr/bin/python3
import cgi, os

form = cgi.FieldStorage()

pageID = form['pageID'].value
title = form['title'].value
desc = form['description'].value

opened_file = open('data/'+pageID+'.txt', 'w')
opened_file.write(desc)
opened_file.close()

os.rename('data/'+pageID+'.txt', 'data/'+title+'.txt')

print("Location: index.py?id="+title)
print()