#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;

    cin>>n;

    vector<int> socre(n);

    for(int i=0;i<n;i++)
    {   
        int x;

        cin>>x;

        socre.push_back(x);

    }

    int l,r;

    cin>>l>>r;

    int num=upper_bound(socre.begin(),socre.end(),r)
           -lower_bound(socre.begin(),socre.end(),l);
        
    cout<<num<<endl;

    return 0;
}