#include<iostream>
using namespace std;
int main()
{
    int f=6;
    int *p=&f;
    int *q=p;
    cout<<p<<endl;
    cout<<q<<endl;

    (*q)++;
    cout<<f<<endl;
 return 0;
}