#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,newS;

    getline(cin,s);

    for(int j=0,i=0;i<s.size();i=j)
    {   
        newS+=s[i];

        int count=0;

        for(j=i;j<s.size();j++)
        {  
                
            if(s[i]==s[j])
            {  
                count++;
            }

            else
            {   
                break;
            }

        }
        newS+=to_string(count);

    }

    cout<<newS;

    return 0;
}