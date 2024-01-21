#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=0; i<n; i++)
    {
    
        for(char c='A'; c<='A'+i; c++)
        {
            cout<<c;
         
        }
        cout<<endl;
    }
}
int main()
{
    int  n=5;
    pattern(n);
    
 return 0;
}