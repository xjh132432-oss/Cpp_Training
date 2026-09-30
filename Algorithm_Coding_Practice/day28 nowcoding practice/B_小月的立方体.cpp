// 给定一个边长为 a 的格点立方体。相邻格点之间的距离为 1。格点的坐标表示为 (x, y, z) (0 ≤ x, y, z ≤ a)
// 其中 x, y, z 均为整数。每条棱上恰有 a+1 个格点，坐标为 (x, y, z) 的格点上写有整数 v{x,y,z}。
// 请计算这个立方体的四条体对角线上的数字之和。若一个格点位于多条体对角线上，则按所在体对角线的条数重复计入
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int n = a + 1;

    vector<vector<vector<int>>> cube(
        n,
        vector<vector<int>>(
            n,
            vector<int>(n)
        )
    );


    for(int x = 0; x <= a; x++)
    {
        for(int y = 0; y <= a; y++)
        {
            for(int z = 0; z <= a; z++)
            {
                cin >> cube[x][y][z];
            }
        }
    }

    long long sum = 0;

    for(int i = 0; i <= a; i++)
    {

        sum += cube[i][i][i];


        sum += cube[i][i][a - i];


        sum += cube[i][a - i][i];


        sum += cube[i][a - i][a - i];
    }

    cout << sum << endl;

    return 0;
}