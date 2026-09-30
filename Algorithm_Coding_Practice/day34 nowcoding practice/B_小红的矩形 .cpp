// 小红正在和小紫玩游戏。
// 现在小红拿到了两个不同的点 (x1, y1), (x2, y2)，小红和小紫要分别构造一个新的点，使得这四个点能够作为四个顶点组成一个矩形（要求四个边均与坐标轴平行）。
// 我们认为小红和小紫都会以最优策略进行游戏，请给出一种合法的构造。
// 小红定义两个点 (a, b), (c, d) 相同，当且仅当 a = c 且 b = d。
#include<iostream>
#include<vector>


using namespace std;

int main()
    
{
    pair<int,int> one={0,0},secd={0,0};
    
    cin>>one.first>>one.second;
    
    cin>>secd.first>>secd.second;
    
    if(one.first==secd.first&&one.second!=secd.second)
    {
        cout<<one.first+1<<" "
            <<one.second<<" "
            <<secd.first+1<<" "
            <<secd.second<<endl;
            
    }
    
    if(one.first!=secd.first&&one.second==secd.second)
    {
        cout<<one.first<<" "
            <<one.second+1<<" "
            <<secd.first<<" "
            <<secd.second+1<<" ";
            
    }
    
    
    if(one.first!=secd.first&&one.second!=secd.second)
    {
        cout<<one.first<<" "
            <<secd.second<<" "
            <<secd.first<<" "
            <<one.second<<" ";
            
    }
    
    return 0;
}