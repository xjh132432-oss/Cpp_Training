// 给定两个非负整数 x, y，请你求出有多少对非负整数 (p, q)，满足：
// p xor q = x
// p or q = y

// 【名词解释】
// xor：指位运算中的按位异或（Bitwise XOR），对两个整数的二进制表示按位进行异或运算。
// or：指位运算中的按位或（Bitwise OR），对两个整数的二进制表示按位进行或运算。

// 输入描述:
// 第一行输入一个整数 T（1 ≤ T ≤ 2×10^5），表示询问次数。
// 接下来 T 行，每行输入两个整数 x, y（0 ≤ x, y ≤ 10^9）。

// 输出描述:
// 对于每次询问，输出一行一个整数，表示满足条件的有序整数对 (p, q) 的数量。


#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        long long x, y;
        cin >> x >> y;


        if((x | y) != y)
        {
            cout << 0 << '\n';
            continue;
        }


        int cnt = __builtin_popcountll(x);

        cout << (1LL << cnt) << '\n';
    }

    return 0;
}