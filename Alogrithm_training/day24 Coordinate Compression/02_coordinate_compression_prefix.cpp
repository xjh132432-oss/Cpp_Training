#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
    int n;

    cin>>n;


    vector<pair<int,int>> seg(n);


    vector<int> xs;



    for(int i=0;i<n;i++)
    {
        cin>>seg[i].first
           >>seg[i].second;


        xs.push_back(seg[i].first);

        xs.push_back(seg[i].second);
    }



    sort(xs.begin(),xs.end());


    xs.erase(
        unique(xs.begin(),xs.end()),
        xs.end()
    );



    vector<int>diff(xs.size()+2,0);



    for(auto x:seg)
    {
        int l=
        lower_bound(
            xs.begin(),
            xs.end(),
            x.first
        )-xs.begin()+1;


        int r=
        lower_bound(
            xs.begin(),
            xs.end(),
            x.second
        )-xs.begin()+1;



        diff[l]++;

        diff[r+1]--;
    }



    int sum=0;


    for(int i=1;i<=xs.size();i++)
    {
        sum+=diff[i];

        cout<<xs[i-1]
            <<":"
            <<sum
            <<endl;
    }


    return 0;
}
