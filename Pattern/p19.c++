#include<iostream>
using namespace std;
void pattern(int n)
{
        int iniS=0;
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<"*";
        }

        // space
        for(int j=0; j<iniS; j++)
        {
cout<<" ";
        }

                for(int j=1; j<=n-i; j++)
        {
            cout<<"*";
        }
iniS+=2;
cout<<endl;
    }
     iniS=8;
    for(int i=1; i<=n; i++)
    {
        // star
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }

        // spaces 
    for(int j=0; j<iniS; j++)
    {
        cout<<" ";
    }
    // star
    for(int j=1; j<=i; j++)
    {
        cout<<"*";
    }
    iniS-=2;
    cout<<endl;
    }
}
int main()
{
    int n=5; 
    pattern(n);
 return 0;
}