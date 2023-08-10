#include <iostream>
using namespace std;

class complex{
    // Complete this class
    private :
 int a,b;   
 public:
    int setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    complex add(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    int showdata()
    {
        cout<<a<<b;
    }
    
};

int main()
{
int real1,imaginary1,real2,imaginary2;
     cin>>real1>>imaginary1;
      cin>>real2>>imaginary2;
        complex c1,c2,c3;
        c1.setdata(real1,imaginary2);
        c2.setdata(real2,imaginary2);
        c3=c1.add(c2);
        c3.showdata();
    





return 0;
}

