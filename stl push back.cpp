#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector <int> v1;
    cout<<"Current capacity is"<<v1.capacity()<<endl;
    v1.push_back(20);
    cout<<"current capacity is"<<v1.capacity()<<endl;
       
    cout<<v1.capacity()<<endl;
    v1.push_back(10);
    cout<<v1.capacity()<<endl;
   v1. push_back(30);
    cout<<v1.capacity()<<endl;
   v1. push_back(40);
    cout<<v1.capacity()<<endl;







return 0;
}

