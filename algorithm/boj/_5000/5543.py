import sys

# 세트 메뉴-50원을 골랐을 때 가장 싼 가격을 출력하시오.

if __name__ == "__main__":
	ham = 2000
	drink = 2000

	for i in range(5):
		temp = int(sys.stdin.readline())

		if i < 3 and temp < ham:
			ham = temp
		elif i >= 3 and temp < drink:
			drink = temp
	
	print(ham + drink - 50)