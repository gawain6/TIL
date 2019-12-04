#include <stdio.h>

int main() {
    int point[5][5];
    int a[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    int b[4][2] = { a[0][0], a[1][0], 
                    a[0][1], a[1][1],
                    a[0][2], a[1][2],
                    a[0][3], a[1][3]};
    int arr[3][9];
    for(int i=2; i<5; i++) {
        for(int j=1; j<10; j++) {
            printf("%02d ", i*j);
        }
        printf("\n");
    }
    for(int i=0; i<4; i++) {
        scanf("%d %d %d %d", &point[i][0], &point[i][1], &point[i][2], &point[i][3]);
        point[i][4] = point[i][0]+point[i][1]+point[i][2]+point[i][3];
        printf("%02d %02d %02d %02d %d\n", point[i][0], point[i][1], point[i][2], point[i][3], point[i][4]);
    }
    
}