#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{   
   string s;

   getline(cin,s);

   vector<string> end;

    while(true)
    {   
        int pos=s.find(",");
        
        if(pos==string::npos)
        {
            end.push_back(s);

            break;
        }
        
        end.push_back(s.substr(0,pos));

        s.erase(0,pos+1);
    }

    cout<<"学号:"<<end[0]<<endl;
    cout<<"姓名:"<<end[1]<<endl;
    cout<<"成绩:"<<end[2]<<endl;

    return 0;
}