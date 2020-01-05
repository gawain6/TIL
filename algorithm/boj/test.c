#include <stdio.h>

int n, cnt;
int arr[15][15];

// [11][12][13][14]  [1][][][]
// [21][22][23][24]  [][][][]
// [31][32][33][34]  [][][][]
// [41][42][43][44]  [][][][]

void nQueen(int x, int y, int c) { // nQueen(0, 0, 1)
	int i;
	for(i=1;x+i<n;i++) { // (i=1; 1<4; i++)
		arr[x+i][y] += c; // arr[1][0] += 1
		if (y+i < n) arr[x+i][y+i] += c;
		if (y-i >= 0) arr[x+i][y-i] += c;
	}	
}
void dfs(int x, int y) { // dfs(0, 0)
	int i;
	if(x == n - 1) { // if(0==4-1)
		cnt++;
		return;
	}
	nQueen(x, y, 1); // nQueen(0, 0, 1)
	for(i=0;i<n;i++)
		if(arr[x + 1][i] == 0) dfs(x + 1, i);
	nQueen(x, y, -1);
}
int main() {
	int i;
	scanf("%d", &n); // n=4
	for(i=0;i<n/2;i++) // i=0; i<2; i++
		dfs(0, i); // dfs(0, 0)
	cnt *= 2;
	if(n % 2 == 1) dfs(0, n/2);
	printf("%d\n", cnt);
	return 0;
}