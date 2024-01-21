#include <iostream>
using namespace std;
class B;
class A
{
	private :
		int a;
		public :
			friend int fun(A,B);
			int setdata(int x)
			{
				a=x;
			}
};
class B
{
	private:
		int b;
		public:
			friend int fun(A,B);
			int setdata(int y)
			{
				b=y;
			}
};
int fun(A obj1, B obj2)
{
	cout<<obj1.a+obj2.b;
}

int main()
{

A obj1;
B obj2;

obj1.setdata(2);
obj2.setdata(3);
fun(obj1,obj2);



return 0;
}

