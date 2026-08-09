#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{   

    vector<int> a = {1,2,2,2,3,5,7,8,10};

    int q;

    cin>>q;
    
    while(q--)
    {
        int x;

        cin>>x;

        int ans=upper_bound(a.begin(),a.end(),x)
                -lower_bound(a.begin(),a.end(),x);

        cout<<"出现了:"<<ans<<"次"<<endl;


    }



    
    return 0;
}