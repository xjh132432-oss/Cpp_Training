// 小红定义一个字符串是一个「好串」，当且仅当其恰好含有两种不同的字符。
// 给定一个长为 n 的仅由 0 和 1 组成的字符串 s，请计算共有多少个 s 的非空子串是一个「好串」。

// 【名词解释】
// 子串：从原字符串中，连续的选择一段字符（可以全选、可以不选）得到的新字符串。

// 输入描述:
// 第一行输入一个整数 n (1 ≤ n ≤ 10^6)。
// 第二行输入一个长为 n 的字符串 s，保证 s 仅包含 '0', '1'。

// 输出描述:
// 输出一个整数，代表是一个「好串」的非空子串数量。

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    long long sum = 0;

    int i = 0;

    while(i < n)
    {
        int j = i;

        while(j < n && s[j] == s[i])
        {
            j++;
        }

        if(j < n)
        {
            sum += (long long)(j - i) * (n - j);
        }

        i = j;
    }

    cout << sum;

    return 0;
}