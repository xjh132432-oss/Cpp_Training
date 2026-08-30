// 在二维平面中，小红初始位于 (0,0)。小红会移动 n 次，每次都只会水平或垂直坐标轴方向移动一个单位距离，我们把这 n 次移动用一个字符串 s=s1s2…sn 表示，具体的：
// ∙ 如果 si = U，第 i 次移动小红会从 (x,y) 移动到 (x,y+1)；
// ∙ 如果 si = D，第 i 次移动小红会从 (x,y) 移动到 (x,y−1)；
// ∙ 如果 si = L，第 i 次移动小红会从 (x,y) 移动到 (x−1,y)；
// ∙ 如果 si = R，第 i 次移动小红会从 (x,y) 移动到 (x+1,y)。
// 现在你要删除 s 中的 k 个字符。设经过剩余的 n−k 次移动后，小红的坐标为 (x0,y0)，你需要最大化 |x0| + |y0| 的值。
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    string s;

    for(int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        s.push_back(x);
    }

    int countU = 0;
    int countD = 0;
    int countR = 0;
    int countL = 0;

    for(auto x : s)
    {
        if(x == 'U')
            countU++;

        if(x == 'D')
            countD++;

        if(x == 'R')
            countR++;

        if(x == 'L')
            countL++;
    }

    int remain = n - k;

    int good1 = countR + countU;
    int good2 = countR + countD;
    int good3 = countL + countU;
    int good4 = countL + countD;

    int best = -1;
    int type = 0;

    int value;

    value = 2 * min(good1, remain) - remain;
    if(value > best)
    {
        best = value;
        type = 1;
    }

    value = 2 * min(good2, remain) - remain;
    if(value > best)
    {
        best = value;
        type = 2;
    }

    value = 2 * min(good3, remain) - remain;
    if(value > best)
    {
        best = value;
        type = 3;
    }

    value = 2 * min(good4, remain) - remain;
    if(value > best)
    {
        best = value;
        type = 4;
    }

    char goodA, goodB;

    if(type == 1)
    {
        goodA = 'R';
        goodB = 'U';
    }
    else if(type == 2)
    {
        goodA = 'R';
        goodB = 'D';
    }
    else if(type == 3)
    {
        goodA = 'L';
        goodB = 'U';
    }
    else
    {
        goodA = 'L';
        goodB = 'D';
    }

    int good = 0;

    for(auto x : s)
    {
        if(x == goodA || x == goodB)
            good++;
    }

    int needGood = min(good, remain);
    int deleteGood = good - needGood;
    int deleteBad = k - deleteGood;

    string ans;

    for(auto x : s)
    {
        if((x != goodA && x != goodB) && deleteBad > 0)
        {
            deleteBad--;
        }
        else if((x == goodA || x == goodB) && deleteGood > 0)
        {
            deleteGood--;
        }
        else
        {
            ans.push_back(x);
        }
    }

    cout << ans;

    return 0;
}