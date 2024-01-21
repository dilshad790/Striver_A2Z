#include<iostream>
using namespace std;
void update(int *p1)
{
    // cout<<" update()="<<p<<endl;
    // p1=p1+1;
    // cout<<"after add update in fun"<<p<<endl;
    *p1=*p1+1;
}
int main()
{
    int temp=5;
    int *p=&temp;
    cout<<"Before"<<p<<endl;
    update(p);
    cout<<"After"<<p<<endl;
    cout<<"Before value"<<*p<<endl;
    update(p);
    cout<<"After value"<<*p<<endl;
    
 return 0;
}