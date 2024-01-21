#include<iostream>
using namespace std;
int getLength(char arr[])
{
    int cnt=0;
    for(int i=0; arr[i]!='\0'; i++)
    {
        cnt++;
    }
    return cnt;
}
int main()
{
// char s[2]={'a','b'};
// cout<<sizeof(s)<<" "<<s[2];

// 
// char name[20];
// cout<<"Enter Your Name";
// cin>>name;
// cout<<name;
// name[2]='\0';// terminator
// cout<<name;

char name[20];
cout<<"Enter Your Name";
cin>>name;
cout<<getLength(name);

 return 0;
}