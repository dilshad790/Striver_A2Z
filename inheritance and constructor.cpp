#include <iostream>
using namespace std;
// multiple inheritance 
class A
{
	public:
		A()
		{
			cout<<"i am a constructor of class A";}
};
class B
{
	public:
		B()
		{
			cout<<"i am a constructor of class B";
		}
};
class C:public A,public B
{

};
int main()
{
	C obj;
return 0;
}

