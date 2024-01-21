#include <iostream>
using namespace std;
class complex 
	{
		private:
			int a,b;
			friend complex operator+(complex ,complex);
			public:
			//	friend ccomplex operator+(complex ,complex);
			int setdata(int x,int y)
			{
				a=x;
				b=y;
				
			}
			int showdata()
			{
				cout<<"Sum is="<<a<<b;}
				
			complex operator+(complex X,complex Y)
	{
		 copmlex temp;
		temp.a=X.a+Y.a;
		temp.b=X.b+Y.b;
		return temp;
	}

int main()
{

complex c1,c2,c3;
c1.setdata(3,4);
c2.setdata(5,6);
c3=c1+c2;
c3.showdata();




return 0;
}

