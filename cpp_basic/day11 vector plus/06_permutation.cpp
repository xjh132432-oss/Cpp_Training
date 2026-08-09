#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v;

    for(int i=0;i<3;i++)
    {
        int x;

        cin>>x;

        v.push_back(x);
    }

    sort(v.begin(),v.end());

    int maxNum=0;

    do
    {
        int num=0;
    
        for(auto x:v)
        {
            num=num*10+x;
        }

        cout<<num<<endl;

        maxNum=max(maxNum,num);

    }while(next_permutation(v.begin(),v.end()));
    
    cout<<"最大值:"<<endl;

    cout<<maxNum;


    return 0;
}