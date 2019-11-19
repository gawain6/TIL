import sys

if __name__ == "__main__":
    c = int(sys.stdin.readline())
    
    for _ in range(c):
        li = list(map(int, sys.stdin.readline().split()))
        n = li.pop(0)
        cnt = 0
        avge = sum(li) / n
        
        li.sort()
        for j in range(len(li)):
            if li[j] > avge:
                cnt = n - j
                break
                    
        print(f'{cnt/n*100.0:.3f}%')