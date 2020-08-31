#include <iostream>
using namespace std;

/*
 * 1. 첫 줄에 시험 과목 N을 입력받는다. (N <= 1000)
 * 2. 둘 째 줄에 N만큼 값을 입력받는다. (0 <= x <= 100)
 * 3. 성적 값 중 최댓값을 M에 넣고, 모든 점수를 점수/M*100 으로 고친다.
 * 4. 마지막으로 새로운 평균을 출력한다.
 */

int main() {
    int n;
    float max = 0, total = 0;
    float ar[1000] = {};

    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> ar[i];
        if(ar[i] > max) max = ar[i];
    }
    for(int i = 0; i < n; ++i)
    {
        ar[i] = ar[i]/max*100.f;
        total += ar[i];
    }
    cout << total / (float)n << endl;
}