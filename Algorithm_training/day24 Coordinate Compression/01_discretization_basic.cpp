#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;

    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<int> b=a;

    sort(b.begin(),b.end());

    b.erase(unique(b.begin(),b.end()),b.end());

    for(int x:a)
    {
        int index=lower_bound(b.begin(),b.end(),x)-b.begin()+1;

        cout<<index<<" ";
    }


    return 0;
}