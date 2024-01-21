#include<iostream>
using namespace std;
void triangle(int n)
{
    for(int i=0; i<n; i++)
    {
        // for space
        for(int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }

        // for star
        for(int k=0; k<2*i+1; k++)
        {
            cout<<"*";
        }

        // for space
        for(int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
}
 
void inverted_triangle(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<" ";
        }

        // for star
        for(int k=0; k<9-2*i; k++)
        {
            cout<<"*";
        }

        // for space
        for(int j=0; j<=i; j++)
        {
            cout<<" ";
        }

cout<<endl;

    }
}
int main()
{
    int n=5;
    triangle(n);
    inverted_triangle(n);
 return 0;
}