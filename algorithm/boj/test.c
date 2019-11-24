#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void PrintEratos(int start_num, int end_num)
{
	bool *isArrPrime=(bool*)malloc(end_num+1);
	
	for(int i=2; i<=end_num;i++)
		isArrPrime[i]=true;
	
	for(int i=2;i<=end_num;i++)
		if(isArrPrime[i])
		{
			if(i>=start_num)
				printf("%d\n",i);
			for(int j=i+i;j<=end_num;j+=i)
				isArrPrime[j]=false;
		}
	free(isArrPrime);
}

int main(void) {
	int start_num, end_num;
	
	scanf("%d %d",&start_num, &end_num);
	PrintEratos(start_num,end_num);
	return 0;
}