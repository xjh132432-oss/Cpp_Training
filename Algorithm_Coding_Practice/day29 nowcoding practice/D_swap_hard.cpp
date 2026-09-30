// 在本题中我们认为字符串的下标从 1 开始。
// 现在有一个字符 c初始时有 c = '2'。给定两个长为 n 的只包含 '0', '1' 的字符串 s 和 t
// 保证这两个字符串中所包含的 '1' 数量相同。
// 小红希望两个字符串相同，为此她可以做任意（可以为 0）次如下操作：
// 选择 s 中的任意一位，交换这一位与 c。
// 请你给出一个可能的操作方案使得 s 和 t 相同，要求 ————操作次数最少————。
// 可以证明在所给的限制条件下一定存在至少一种合法的操作方案使得 s 和 t 相同。

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    string s, t;
    int n;

    cin >> n >> s >> t;

    queue<int> zero;
    queue<int> one;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            if (s[i] == '1')
            {
                one.push(i);
            }
            else
            {
                zero.push(i);
            }
        }
    }


    if (zero.empty())
    {
        cout<<0<<endl;

        return 0;
    }

    vector<int> num;


    int first_one = one.front();
    one.pop();

    num.push_back(first_one + 1);


    while (!zero.empty())
    {

        num.push_back(zero.front() + 1);
        zero.pop();

        if (!one.empty())
        {
            num.push_back(one.front() + 1);
            one.pop();
        }
    }

    num.push_back(first_one + 1);

    cout<<num.size()<<endl;

    for (auto x : num)
    {
        cout << x <<endl;
    }

    return 0;
}