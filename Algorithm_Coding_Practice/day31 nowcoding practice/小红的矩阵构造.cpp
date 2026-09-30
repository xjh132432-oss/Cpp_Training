// 题目描述

// 小红想让你构造一个 n 行 n 列的矩阵，矩阵中的元素为 1 到 n^2，每个数只出现 1 次。小红希望每两个相邻的数之和均为奇数，你能帮帮她吗？

// 输入描述:
// 一个正整数 n (1 ≤ n ≤ 100)。

// 输出描述:
// 输出 n 行，每行输出 n 个正整数。有多解时输出任意合法解。
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int odd = 1;
    int even = 2;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if((i + j) % 2 == 0)
            {
                cout << odd;
                odd += 2;
            }
            else
            {
                cout << even;
                even += 2;
            }

            if(j != n - 1)
                cout << " ";
        }

        cout << '\n';
    }

    return 0;
}