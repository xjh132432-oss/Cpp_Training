#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
    string s;

    getline(cin,s);

    int num=0,letter=0,space=0,cont=0;

    unordered_map<char,int> count;

    int maxNum=0;

    char maxChar;

    for(auto x:s)
    {
        if(isdigit(x))
        {
            num++;
        }

        else if(isalpha(x))
        {
            letter++;
        }
        
        else if(x==' ')
        {
            space++;
        }

        count[x]++;

        cont++;
    }

    
    cout<<"字符总数量:"<<endl<<cont<<endl;

    cout<<"字母数量:"<<endl<<letter<<endl;

    cout<<"数字数量:"<<endl<<num<<endl;

    cout<<"空格数量:"<<endl<<space<<endl;

    cout<<"字符统计:"<<endl;

    for(auto x:count)
    {
        if(x.second>maxNum)
        {
            
            maxChar=x.first;

            maxNum=x.second;

        }

        cout<<x.first<<":"<<x.second<<endl;

    }
    cout<<"出现最多的字符:"<<endl<<maxChar<<endl;

    cout<<"出现次数:"<<endl<<maxNum<<endl;

    return 0;

}