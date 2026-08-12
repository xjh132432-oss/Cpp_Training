#include<iostream>
#include<queue>
using namespace std;

class in
{   
    public:

    int id;

    int time;
};
int main()
{
    int n;

    cin>>n;

    queue<in> stud;

    for(int i=0;i<n;i++)
    {   
        in x;

        cin>>x.id>>x.time;

        stud.push(x);

    }

    int sum=0;

    while(!stud.empty())
    {   
        
        sum+=stud.front().time;

        cout<<stud.front().id<<" "<<sum<<endl;

        stud.pop();
    }


    return 0;

}