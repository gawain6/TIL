import sys

def merge(li,start,mid,end):
    merged=[]
    left_idx=start;right_idx=mid+1
    while left_idx<=mid and right_idx<=end:
        if len(li[left_idx])<len(li[right_idx]) or li[left_idx]<li[right_idx]:
            merged.append(li[left_idx])
            left_idx+=1
        else:
            merged.append(li[right_idx])
            right_idx+=1
    while left_idx<=mid:
        merged.append(li[left_idx])
        left_idx+=1
    while right_idx<=end:
        merged.append(li[right_idx])
        right_idx+=1
    li[start:end+1]=merged

def merge_sort(li, start, end):
    if start>=end:
        return
    mid=(start+end)//2
    merge_sort(li,start,mid)
    merge_sort(li,mid+1,end)
    
    merge(li,start,mid,end)

if __name__ == "__main__":
	N = int(sys.stdin.readline())
	li = []

	for i in range(N):
		li.append(sys.stdin.readline())

	# 길이가 작으면서 오름차순으로 정렬
	li = sorted(list(set(li)), key=len)
	merge_sort(li, 0, len(li)-1)
	
	# print("==============")
	for i in li:
		print(i, end='')