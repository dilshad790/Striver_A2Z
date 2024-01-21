#include <iostream>
using namespace std;

class complex
{
	private :
		int a,b;
		public :
			int setdata(int x,int y)
			{
				a=x;
				b=y;
			}
int showdata()
{
	cout<<"a="<<a<<"b="<<b;
	
			}		
			friend int fun(complex x)
			{
				cout<<"Sum of a and b is "<<x.a+x.b;	
			}
				
};
int main()
{
complex c1;
c1.setdata(3,4);
fun(c1);

return 0;
}

