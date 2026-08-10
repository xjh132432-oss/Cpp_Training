#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;

    cin>>n;

    vector<int> num;

    while(n--)
    {
        int x;

        cin>>x;

        num.push_back(x);

    }

    int target;
    
    cin>>target;

    int l=0,r=num.size()-1;

    while(l<r)
    {
        if(num[l]+num[r]>target)
        {
            r--;
        }
        else if(num[l]+num[r]<target)
        {
            l++;
        }
        else
        {   
            cout<<l<<endl<<r<<endl;
            return 0;
        }
    }

    
        cout<<"NO"<<endl;
    

    return 0;
}