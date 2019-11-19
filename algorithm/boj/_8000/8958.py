import sys;

if __name__ == "__main__":
    n = int(sys.stdin.readline())
    li = []
    
    for i in range(n):
        st = sys.stdin.readline()
        st = st[:len(st)-1]
        li.append(st)
        
    for i in li:
        val_sum = 0
        point = 0
        for j in range(len(i)):
            if i[j] == "O":
                point += 1
                val_sum += point
            else:
                point = 0
        print(val_sum)