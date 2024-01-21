#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    string s1,s2;
cin>>s1>>s2;

string lowercase1,lowercase2;

for(int i=0; i<s1.size(); i++)
{
if((s1[i]>='A' && s1[i]<='Z') && (s2[i]>='A' && s2[i]<='Z'))
{

char c1=(s1[i]-'A')+'a';
lowercase1.push_back(c1);
char c2=(s2[i]-'A')+'a';
lowercase2.push_back(c2);
}

else if((s1[i]>='A' && s1[i]<='Z') && (s2[i]>='a' && s2[i]<='z'))
{

char c1=(s1[i]-'A')+'a';
lowercase1.push_back(c1);
char c2=s2[i];
lowercase2.push_back(c2);
}

else if((s1[i]>='a' && s1[i]<='z') && (s2[i]>='A' && s2[i]<='Z'))
{
char c1=s1[i];
lowercase1.push_back(c1);
char c2=(s2[i]-'A')+'a';
lowercase2.push_back(c2);

}
else if((s1[i]>='a' && s1[i]<='z') && (s2[i]>='a' && s2[i]<='z'))
{
char c1=s1[i];
lowercase1.push_back(c1);
char c2=s2[i];
lowercase2.push_back(c2);

}
}

// cout<<lowercase1<<" "<<lowercase2<<endl;

for(int i=0; i<s1.size(); i++)
{
    if(lowercase1[i]<lowercase2[i])
    {
    cout<<"-1"<<endl;
break;
    }
    else if(lowercase2[i]<lowercase1[i])
    {
        cout<<"1"<<endl;
        break;
    }
    else if(lowercase1==lowercase2)
    {
        cout<<"0"<<endl;
        break;
    }
  
}


    return 0;
}