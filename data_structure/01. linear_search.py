def linear_search(li, target):
	for i in range(len(li)):
		if li[i]==target:
			return i
	return None

if __name__ == "__main__":
    li = [5, 3, 1, 7, 2]
    idx = linear_search(li, 7)
    print(idx)