import sys

if __name__ == "__main__":
    n = 1
    dic = {'0':0, '1':0, '2':0, '3':0, '4':0, '5':0, '6':0, '7':0, '8':0, '9':0}
    
    for i in range(3):
        n *= int(sys.stdin.readline())
        
    for i in range(len(str(n))):
        dic[str(n)[i]] += 1
        
    for i in dic:
        print(dic[i])