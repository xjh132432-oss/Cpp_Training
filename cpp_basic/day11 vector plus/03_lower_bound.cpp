#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;

    vector<int> data={1,2,2,3,5,7,8,10};

    int q;

    cin>>q;

    for(int i=0;i<q;i++)
    {
        int num;

        cout<<"请输入查询的数字:";

        cin>>num;
        
        auto it=lower_bound(data.begin(),data.end(),num);

        if(it==data.end()||*it!=num)
        {   
            cout<<-1<<endl;
        }

        else
        {
            cout<<it-data.begin()<<endl;
        }

    }
    
    return 0;
}