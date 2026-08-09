#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
    vector<int>a={
        1,2,2,2,3,5,7,8,10
    };


    int q;
    cin>>q;


    while(q--)
    {
        int l,r;
        cin>>l>>r;


        auto left=
            lower_bound(
                a.begin(),
                a.end(),
                l
            );


        auto right=
            upper_bound(
                a.begin(),
                a.end(),
                r
            );


        int cnt=right-left;


        if(cnt==0)
        {
            cout<<"0 -1 -1"<<endl;
        }
        else
        {
            cout<<cnt<<" "
                <<*left<<" "
                <<*(right-1)
                <<endl;
        }
    }


    return 0;
}