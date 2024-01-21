#include <iostream>
using namespace std;

class A
{
	public:
		virtual f1()
		{
			cout<<"f1 base class "<<endl;
		}
		int f2()
		{
			cout<<"f2 base class "<<endl;
		}
		int f3()
		{
			cout<<"f3 base class"<<endl;
		}
		
	virtual f4()
		{
			cout<<"f4 base class"<<endl;
		}
		
		virtual f5()
		{
			cout<<"f5 base class"<<endl;
		}
};
class B:public A
{
	int f1()
	{
		cout<<"f1 derived class"<<endl;
	}
	int f2()
	{
		cout<<"f2 derived class"<<endl;
		
	}
	int f3()
	{
		cout<<"f3 derived class"<<endl;
	}
	int f4()
	{
		cout<<"f4 derived class"<<endl;
	}
	int f5()
		{
			cout<<"f5 derived class"<<endl;}
};
int main()
{ A *p;
B obj1;
p=&obj1;
p->f1(); // call f1() function of class A
p->f2(); // B
p->f3();// B
p->f4();// A
p->f5();// A

return 0;
}


