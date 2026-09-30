// 小红面前有 n 个小苯，小苯的血量用一个数组 a = {a1, a2, …, an} 表示，第 i 个小苯有 ai 点血量。
// 之后小红会持续执行若干次如下操作：
// ∙ 如果目前剩余的小苯数量大于 1，那么小红会砍一刀，使得所有当前仍存活的小苯的血量减少 1 点，获得本回合对所有小苯造成伤害总和点分数。血量小于等于 0 的小苯会死亡。
// 请你计算小红会获得多少分。
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> a(n);

    long long sum = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }


    if(n == 1)
    {
        cout << 0;
        return 0;
    }

    sort(a.begin(), a.end());

    sum = sum - a[n - 1] + a[n - 2];

    cout << sum;

    return 0;
}