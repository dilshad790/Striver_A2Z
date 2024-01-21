#include <iostream>
#include<string.h>
using namespace std;

void convert_low_high_to_low(string &s)
{
    int small=0;
    int capital=0;
    for(int i=0 ; i<s.length(); i++)
    {
if(s[i]>='a' && s[i]<='z')
small++;
if(s[i]>='A' && s[i]<='Z')
capital++;
    }
    if(small>capital)
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        s[i]=(s[i]-'A')+'a';
    }
    else if(small<capital)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='a' && s[i]<='z')
            s[i]=(s[i]-'a')+'A';
        }
    }
    else if(small==capital)
    {
        for(int i=0; i<s.length(); i++)
        {

        if(s[i]>='A' && s[i]<='Z')
        s[i]=(s[i]-'A')+'a';
        }
    }

}
int main() {
    // Your code here
    string s;
    cin>>s;
convert_low_high_to_low(s);
    cout<<s<<endl;
    return 0;
}