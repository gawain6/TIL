#include <iostream>

#include <string>
#include <vector>

#include <algorithm>

using namespace std;

bool cmp(string str1, string str2)
{
    return str1 + str2 > str2 + str1;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> strings;
    
    for (auto num : numbers)
        strings.push_back(to_string(num));

    sort(strings.begin(), strings.end(), cmp);

    if (strings[0] == "0")
        return "0";

    for (auto num : strings)
        answer += num;

    return answer;
}

int main()
{
    vector<int> case1 = { 6, 10, 2 }; // 6210
    vector<int> case2 = { 3, 30, 34, 5, 9 }; // 9534330

    string res = solution(case2);
    cout << res << endl;

    return 0;
}