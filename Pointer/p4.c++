#include<iostream>
using namespace std;
void update(int **p2)
{
    // p2=p2+1;
    // koi change ni hoga
    // *p2=*p2+1;    
    // value at p2 i.e.  p1 ka  change  hoga
    **p2=**p2+1;
    // koi change ni hoga

}
int main()
{   // DOUBLE POINTER
int i=5;
int *p1=&i;
int **p2=&p1;
cout<<"Before"<<&i<<endl;
cout<<"Before"<<p1<<endl;
cout<<"Before"<<p2<<endl;
update(p2);
cout<<"After"<<i<<endl;
cout<<"After"<<p1<<endl;
cout<<"After"<<p2<<endl;

 return 0;
}