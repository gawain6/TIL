#include <stdio.h>
#include <stdlib.h>

// 나이와 이름을 입력 받음 -> 21 Junkyu
// 나이가 증가하는 순서로 출력, 나이가 같으면 먼저 입력된 순으로 출력

typedef struct info {
    int age;
    char name[101];
} Info;

Info account[100001];
int cmp(const void* a, const void* b) {
    Info ia=*(Info*)a;
    Info ib=*(Info*)b;
    
    if(ia.age>ib.age) return 1;
    else if(ia.age==ib.age) { // 나이가 같으면 인덱스가 낮은 값이 우선됨
        for(int i=0; i<sizeof(account)/sizeof(Info); i++) { // 인덱스 값 찾기
            if(ia.age==account[i].age&ia.name==account[i].name) return 1;
            else if(ib.age==account[i].age&ib.name==account[i].name) return -1;
        }
    }
    return -1;
}

int main() {
    int n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %s", &account[i].age, account[i].name);
    }
    
    qsort(account, n, sizeof(Info), cmp);
    for(i=0; i<n; i++) {
        printf("%d %s\n", account[i].age, account[i].name);
    }
}