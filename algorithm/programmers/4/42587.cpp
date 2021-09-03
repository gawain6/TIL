#include <iostream>
#include <string>
#include <vector>

#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int size = priorities.size();
    priority_queue<int> pq;

    for (int i = 0; i < size; ++i)
    {
        pq.push(priorities[i]);
    }

    while (!pq.empty())
    {
        for (int i = 0; i < size; ++i)
        {
            if (pq.top() == priorities[i])
            {
                pq.pop();
                ++answer;

                if (i == location)
                {
                    priority_queue<int> empty;
                    pq.swap(empty);
                    break;
                }
            }
        }
    }

    return answer;
}

int main()
{
    // ��⿭
    vector<int> case1 = {2, 1, 3, 2}; // 2, 1
    vector<int> case2 = {1, 1, 9, 1, 1, 1}; // 0, 5
    vector<int> case3 = {5, 1, 3, 4, 3, 5, 9}; // 5, 
    vector<int> case4 = {9, 1, 1, 9, 2, 1};
    vector<int> case5 = {4, 9, 1, 2, 2, 1, 5, 4};
    vector<int> case6 = {2, 2, 2, 1, 3, 4};
    int location = 2; // ��û�� ������ ���� ������� � ��ġ�� �ִ���

    int res = solution(case1, location);

    cout << res << endl;

    return 0;
}