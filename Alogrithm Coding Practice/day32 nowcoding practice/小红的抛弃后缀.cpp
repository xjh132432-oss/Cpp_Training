// 题目描述 
// 小红拿到了一个正整数，她准备切掉一个后缀并抛弃，
// 使得剩余部分是9的倍数。小红想知道有多少种不同的操作方案？
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    cin >> x;

    int count = 0;
    int sum = 0;

    for (char c : x)
    {
        sum += c - '0';
    }

    while (!x.empty())
    {

        if (sum % 9 == 0)
        {
            count++;
        }

        sum -= x.back() - '0';
        x.pop_back();
    }

    cout << count;

    return 0;
}