#include <iostream>
using namespace std;

int main() {
    int n, i, j, grade;
    cin >> n;
    int weight[n];
    int height[n];
    for(i=0; i<n; i++) {
        cin >> weight[i] >> height[i];
    }
    for(i=0; i<n; i++) {
        grade=1;
        for(j=0; j<n; j++) {
            if((i!=j)&(weight[i]<weight[j]&height[i]<height[j])) {
                grade++;
            }
        }
        cout << grade << " ";
    }
    cout << "\n";
    return 0;
}