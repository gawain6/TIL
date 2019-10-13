def binary_search(li, target):
	start=0
	end=len(li)-1 # 5

	while start<=end:
		mid=(start+end)//2

		if target==li[mid]:
			return mid
		elif target>li[mid]:
			start=mid+1
		else:
			end=mid-1

	return None

if __name__ == "__main__":
    li = [1, 3, 4, 5, 8, 11]
    idx = binary_search(li, 2)
    print(idx)