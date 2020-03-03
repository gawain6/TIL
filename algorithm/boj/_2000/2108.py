# arithmetic_mean 산술평균
# median_value 중앙값
# mode 최빈값
# range 범위

import sys, math

if __name__ == "__main__":
	N = int(sys.stdin.readline())
	nbr_sum = 0
	li = [0] * 8001
	sort_li = []
	mode = [0, 0]
	cnt = 0
	for i in range(N):
		nbr = int(sys.stdin.readline())
		li[nbr+4000 if nbr > 0 else nbr*(-1)] += 1
		nbr_sum += nbr
		sort_li.append(nbr)
	
	sort_li.sort()

	for i in range(len(li)):
		nbr = i-4000 if i > 4000 else i*(-1)
		if li[i] == 0: continue
		elif li[i] > cnt:
			mode[0], mode[1] = nbr, nbr
			cnt = li[i]
		elif li[i] == cnt:
			if nbr < mode[0]:
				mode[1] = mode[0]
				mode[0] = nbr
			elif (nbr != mode[0] and nbr < mode[1]) or (mode[0] == mode[1]):
				mode[1] = nbr

	print(round(nbr_sum/N))
	print(sort_li[math.floor(N/2)])
	print(mode[1])
	print(sort_li[-1]-sort_li[0])
