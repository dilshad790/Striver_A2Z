#include <iostream>
using namespace std;
class B;
class A{
	private :
		int a;
		public :
			int b;
			friend int fun(A,B);
			int setdata(int y)
			{
				a=y;
				
			}
};
class B{
	private :
		int c;
		public :
	friend int fun(A,B);
	int setadata(int x)
	{
		c=x;
	}
};

int fun(obj1,obj2)
{
	cout<<" Sum is"<<obj1.a+bjo2.c
}
int main()
{
A obj1;
B obj2;
obj1.setdata(3);
obj2.setdata(4);
fun(A obj1,B obj2);


return 0;
}

