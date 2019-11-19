if __name__ == "__main__":
    a, b = map(int, input().split())
    symbol = '>' if a > b else '<' if a < b else '=='
    print(symbol)