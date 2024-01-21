#include<iostream>
using namespace std;
void Pattern(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
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