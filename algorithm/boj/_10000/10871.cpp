#include <iostream>

/*
 * 1. ù ° �ٿ� ������ ���� N�� X�� �Է¹޴´�.
 * 2. N ũ���� ���� �迭�� �����Ѵ�.
 * 3. for������ �ι� ° �ٿ��� N���� ������ �Է� �� ���� �迭�� �����Ѵ�.
 * 4. for������ N���� ���� �� X���� ���� ���� ����Ѵ�.
 */

int main(void) {
    int N, X, i;
    int *progression;

    scanf("%d %d", &N, &X);
    progression = new int[N];
    for(i=0; i<N; i++) {
        scanf("%d", &progression[i]);
    }
    for(i=0; i<N; i++) {
        if(progression[i] < X) printf("%d ", progression[i]);
    }
    return 0;
}