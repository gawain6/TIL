if __name__ == "__main__":
    for _ in range(100):
        try:
            string = input()
            if not string or len(string)>100:
                continue
            else:
                print(string.strip())
        except EOFError:
            break