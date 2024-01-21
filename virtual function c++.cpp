#include <iostream>
using namespace std;

class A
{
	public:
		virtual f1()
		{
			cout<<"print base class"<<endl;
		}
		int f2()
		{
			cout<<"print base class"<<endl;
		}
		int f3()
		{
			cout<<"print base class"<<endl;
		}
};
class B:public A
{
	int f1()
	{
		cout<<"print derived class"<<endl;
	}
	int f2()
	{
		cout<<"print derived class"<<endl;
		
	}
	int f3()
	{
		cout<<"print derived class"<<endl;
	}
};
int main()
{ A *p;
B obj1;
p=&obj1;
p->f1();
p->f2();
p->f3();


return 0;
}

