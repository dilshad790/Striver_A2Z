#include<iostream>
using namespace std;
void Pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=6-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int num=5;
    Pattern(num);
 return 0;
}