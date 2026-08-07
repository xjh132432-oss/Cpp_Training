#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;

    cin>>s;

    int dig=0,letter=0,lower=0,upper=0;

    for(char x:s)
    {
        if(isdigit(x))
        {
            dig++;
        }

        else if(isalpha(x))
        {
            letter++;

            if(isupper(x))
            {
                upper++;
            }

            if(islower(x))
            {
                lower++;
            }
        }
    }
    cout<<"字母数量:"<<endl;

    cout<<letter<<endl;


    cout<<"数字数量:"<<endl;

    cout<<dig<<endl;


    cout<<"大写字母:"<<endl;

    cout<<upper<<endl;


    cout<<"小写字母:"<<endl;

    cout<<lower<<endl;



    return 0;
        
    
}