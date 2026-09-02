// 题目描述

// 给定一个 11 位的电话号码，小红想要把它变成便于记忆的「3-4-4」格式，如 11476737376 要变为 114-7673-7376。
// 请你帮小红把电话号码变为「3-4-4」格式。

// 输入描述:
// 第一行输入一个 11 位电话号码。

// 输出描述:
// 输出变为「3-4-4」格式的电话号码。
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{    
    string s;
    
    cin>>s;
    
    for(int i=0;i<11;i++)
    {
        cout<<s[i];
        
        if(i==2||i==6)
        {
            cout<<'-';
        }
    
        
    }
    
    
    
    return 0;
}