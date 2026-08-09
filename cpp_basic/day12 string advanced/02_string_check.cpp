#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main()
{


    string s;

    int letter=0,num=0,oth=0;

    getline(cin,s);

    bool flag=true;

    for(int i=0,j=s.size()-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            flag=false;

            break;
        }
    
    }

    if(flag==true)
    {
        cout<<"是回文!"<<endl;
    }
    else if (flag==false)
    {
        cout<<"不是回文!"<<endl;
    }
    
    for(int i=0;i<s.size();i++)
    {
        if(isdigit(s[i]))
        {
            num++;
        }

        else if(isalpha(s[i]))
        {
            letter++;

            s[i]=toupper(s[i]);
        }

        else
        {
            oth++;
        }
    }    

    cout<<"长度:"<<s.size()<<endl;

    cout<<"字母数量:"<<letter<<endl;

    cout<<"数字数量:"<<num<<endl;

    cout<<"其他数量:"<<oth<<endl;


    cout<<"大写:"<<s<<endl;



    return 0;

}