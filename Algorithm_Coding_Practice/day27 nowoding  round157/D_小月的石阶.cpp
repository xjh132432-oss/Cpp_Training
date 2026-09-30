// 一排石阶共有 n 级，第 i 级石阶的高度为 hi。小月可以选择一段连续石阶 [l, r] (1 ≤ l ≤ r ≤ n) 行走，这段石阶的起伏值定义为 ∑_{i=l+1}^{r} |hi - h{i-1}|。
// 特殊的，当 l = r 时起伏值为 0。小月只会选择起伏值不超过 k 的连续石阶。
// 请你求出小月能够选择的最长连续石阶所包含的石阶数量。
#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    int n,k;
     
    cin>>n>>k;
     
    vector<int> num(n+1);
     
     
    for(int i=1;i<=n;i++)
    {
        cin>>num[i];
    }
     
    int max=-1;
     
    int j=1;
     
    for(int i=1;i<=n;i++)
    {    
 
         
        while(j<=n&&j>=i)
        {
            if((num[j]-num[i])>k)
            {
                i++;
            }
            else if((num[j]-num[i])<k)
            {    
                if((j-i)>max)
                {
                    max=j-i+1;
                }
                 
                j++;
            }
            else
            {   
                if((j-i)>max)
                {
                    max=j-i+1;
                }
                 
                j++;
            }
             
        }
    }
     
     
    cout<<max;
     
    return 0;
}