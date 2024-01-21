#include<iostream>
using namespace std;
char lowchar(char ch)
{
    if(ch>='A' && ch<='Z')
    // return (ch-'A')+'a';
     // Eg: 'B'-'A'=1
    // 'a'+1='b'
    return ch+32;
    else return ch;
}

int main()
{
     string s="Hello";
     for(int i=0; i<s.size(); i++)
     {
    cout<<lowchar(s[i]);

     }
 return 0;
}