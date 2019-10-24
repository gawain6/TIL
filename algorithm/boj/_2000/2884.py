def func(h, m):
    m -= 45
    if m < 0:
        h -= 1
        m += 60
    if h < 0:
        h += 24
    print(h, m)
    
if __name__ == "__main__":
    h, m = map(int, input().split())
    func(h, m)