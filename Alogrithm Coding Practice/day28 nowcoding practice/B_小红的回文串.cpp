// 链接：https://ac.nowcoder.com/acm/contest/138917/B
// 来源：牛客网
// 给定一个长为𝑛的字符串𝑠保证其仅包含小写字母。
// 现在小红想要将某一种字符从原串中全部删除，
// 使得得到的新字符串是一个和原串不同的回文串，
// 请问有多少种字符可以选择？在本题中我们认为空串也是回文串
#include <iostream>
#include <string>

using namespace std;

int n;
string s;

bool isPalindrome(char x)
{
    int i = 0;
    int j = n - 1;

    while(i < j)
    {

        if(s[i] == x)
        {
            i++;
            continue;
        }


        if(s[j] == x)
        {
            j--;
            continue;
        }


        if(s[i] != s[j])
        {
            return false;
        }

        i++;
        j--;
    }

    return true;
}

int main()
{
    cin >> n;
    cin >> s;

    bool visited[26] = {};

    int ans = 0;

    for(int i = 0; i < n; i++)
    {
        int id = s[i] - 'a';

        if(visited[id])
        {
            continue;
        }

        visited[id] = true;

        if(isPalindrome(s[i]))
        {
            ans++;
        }
    }

    cout << ans;

    return 0;
}