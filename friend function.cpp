#include <iostream>
using namespace std;
   // friend function/unary functoion overloading
class complex
	{
		private:
			int a,b;
			public:
		int	setadata(int x,int y)
			{
				a=x;
				b=y;
			}
		int	showdata(){
			cout<<"a="<<a<<"b="<<b;
		}
		
		friend complex operator-(complex);  // declaration of friend function
			
	};
	
	complex operator-(complex x) // define friend fnction   
	{
		complex temp;
		temp.a=-x.a;
		temp.b=-x.b;
		return temp;
	}
int main()
{
complex c1,c2;

c1.setadata(3,4);
c2=-c1;// c2=operator-(c1)
 // isko padhne ka tarika - operator function call hua and usme c1 object pass hua
c1.showdata();
c2.showdata();



return 0;
}

