#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;

    cin>>n;

    vector<int> score(n);

    for(int i=0;i<n;i++)
    {
        cin>>score[i];
    }

    int ans;

    cin>>ans;

    auto it=lower_bound(score.begin(),score.end(),ans);

    if(it!=score.end()&&*it==ans)
    {
        cout<<it-score.begin();
    }
    else
    {
        cout<<"不存在!";
    }

    return 0;
}