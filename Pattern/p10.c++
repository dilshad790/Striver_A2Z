#include<iostream>
using namespace std;
void triangle(int n)
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

void inverted_triangle(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=n; j>i+1; j--)
        {
            cout<<"*";
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