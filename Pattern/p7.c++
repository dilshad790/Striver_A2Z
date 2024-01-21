#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=0; i<n; i++)
    {// For Space
        for(int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        // For *
        for(int k=0; k<2*i+1; k++)
        {
            cout<<"*";
        }
        // for space
        for(int i=0; i<n-i-1; i++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n=5;
    pattern(n);
 return 0;
}

