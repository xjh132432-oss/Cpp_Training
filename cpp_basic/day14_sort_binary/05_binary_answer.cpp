#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;

    cin>>n;

    vector<int> score(n);

    for(int i=0;i>n;i++)
    {
        cin>>score[i];
    }

    bool check(double avg)
    {
        vector<double> temp;


        for(int x:score)
        {
            temp.push_back(x-avg);
        }


        sort(
            temp.begin(),
            temp.end(),
            greater<double>()
        );


        double sum=0;


        for(int i=0;i<k;i++)
        {
            sum+=temp[i];
        }


        return sum>=0;
    };
    
    int k;

    cin>>k;

    int l=0,r=100;

    while(r-l>0,000001)
    {
        int mid=(r+l)/2;


    }
    return 0;
}