#include <iostream>

#include <string>
#include <vector>

#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;

    sort(phone_book.begin(), phone_book.end());

    for (int i = 0; i < phone_book.size() - 1; ++i)
    {
        if (phone_book[i] == phone_book[i + 1].substr(0, phone_book[i].size()))
            return false;
    }

    return answer;
}

int main()
{
    vector<string> case1 = { "119", "97674223", "1195524421" };
    vector<string> case2 = { "123", "456", "789" };
    vector<string> case3 = { "12", "123", "1235", "567", "88" };
    vector<string> case4 = { "1", "4", "54", "2", "1", "75", "541" };
    vector<string> case5 = { "11", "22", "33", "44", "123", "345", "12345", "4567", "34566" };

    bool res = solution(case5);

    cout << res << endl;

    return 0;
}