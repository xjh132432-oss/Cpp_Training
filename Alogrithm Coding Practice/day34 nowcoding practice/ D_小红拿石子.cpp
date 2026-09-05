// 小红正在和小紫玩游戏。
// 现在有n堆石子，小红每次会拿走一整堆石子，小紫每次会从所有还有石子的堆中各拿一个石子，小红先手，轮流行动。她们都希望自己拿到的石子尽可能多。
// 我们认为小红和小紫都会以最优策略进行游戏，请问小红最后会拿到多少石子？
#include<iostream>
#include<queue>

using namespace std;

int main()
{
    int n;
    
    cin>>n;
    
    priority_queue<long long> q;
    
    for(int i=0;i<n;i++)
    {
        long long x;
        
        cin>>x;
        
        q.push(x);
    }
    
    long long sum=0;
    
    long long count=0;
    
    int i=0;
        
    
    while(!q.empty())
    {    
        
        if(i%2!=0)
        {
            count++;
            
            i++;

            continue;
        }
        
            
                long long y=q.top();

                q.pop();
            
                

                if(y-count>0)
                {
                    sum+=y-count;

                }
                else{
                    
                    break;
                }

            
                i++;
        
        
    }
    
    cout<<sum;
    
    return 0;
}