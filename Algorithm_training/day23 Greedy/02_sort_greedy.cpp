#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int n,weight;

    cin>>n>>weight;

    vector<int> a(n);

    for(int i=0;i<n;i++)
    {

        cin>>a[i];

    }

    sort(a.begin(),a.end());

    int count=0;

    int left=0,right=a.size()-1;

    while(left<right)
    {
        if(a[left]+a[right]<=weight)
        {
            count++;

            left++;

            right--;
        }

        else
        {
            right--;
        }

    }


    cout<<count;



    return 0;

}