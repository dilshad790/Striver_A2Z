#include<iostream>
using namespace std;
int main()
{
    int f=8;
    int sec=18;
    int *ptr=&sec;
    *ptr=9;
    cout<<f<<" "<<sec<<endl;
 return 0;
}