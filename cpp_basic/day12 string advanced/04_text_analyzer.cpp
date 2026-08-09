#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main()
{
    string s;

    string newS;

    vector<string> word;

    getline(cin,s);

    int wordCount=0,letter=0,num=0,count=0;

    for(char x:s)
    {   

        if(isalpha(x))
        {
            letter++;

            newS+=x;
        }
        else
        {
            if(!newS.empty())
            {
                word.push_back(newS);

                newS.clear();
            }
        }
        if(isdigit(x))
        {
            num++;
            
        }
    }
    if(!newS.empty())
    {
        word.push_back(newS);
    }
    string find;

    cin>>find;

    int appear=0;

    string maxWord;

    for(auto &x:word)
    {
        if(x==find)
        {
            appear++;
        }

    }

    for(auto &x:word)
    {
        if(x.size()>maxWord.size())
        {
            maxWord=x;
        }


        
    }

    cout<<"字符数量:"<<s.size()<<endl;

    cout<<"字母数量:"<<letter<<endl;

    cout<<"数字数量:"<<num<<endl;

    cout<<"单词数量:"<<word.size()<<endl;

    cout<<"关键词出现次数:"<<appear<<endl;

    cout<<"最长单词:"<<maxWord<<endl;


    return 0;
}