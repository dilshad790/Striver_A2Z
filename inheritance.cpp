/* #include <iostream>
using namespace std;


int main()
{

return 0;
}

*/
#include <iostream>
using namespace std;

class A
{
    protected:
    int a;
    public :
   int  setdataA()
    {   cout<<"Enter the value of a";
cin>>a;
    }

int showdataA()
{
    cout<<"value of a="<<a;
}
};
class B:public A
{
int b,p;
public:
int setdataB()
{ setdataA();
    cout<<"Enter the value of b "<<endl;
    cin>>b;
}
int showdataB()
{showdataA();
    cout<<"b="<<b;
}
int product()
{
    p=a*b;
    cout<<"product of "<<a<<"*"<<b<<"="<<p;
}
};
int main()
{
    B obj;
    obj.setdataB();
    obj.product();

}
