import sys

if __name__ == "__main__":
    N = int(sys.stdin.readline())
    i_sum = 0
    for i in range(1, N):
        i_str = str(i)
        i_sum = i
        for j in range(len(i_str)):
            i_sum += int(i_str[j])
        if i_sum == N:
            print(i)
            break
        else: i_sum = 0
    if i_sum == 0: print(0)