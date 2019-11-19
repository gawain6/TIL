import sys

if __name__ == "__main__":
    s, li = sys.stdin.readline().lower(), []
    
    for i in range(97, 123):
        li.append(s.count(chr(i)))
        
    print('?' if li.count(max(li))>1 else chr(li.index(max(li))+97).upper())