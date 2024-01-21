#include <iostream>
using namespace std;

class complex
	{
		private:
			int a,b;
			public:
			int setdata(int x,int y)// member function inside class
			{
				a=x;
				b=y;
			}
			int showdata()
			{
				
				cout<<"Sum is "<<a+b;
			}
	};
	
	// agar hmlog chahe to memmber function bahar bana sakte h uslie:phle data type class ka naam uske baad function ka naaam
	//  int complex::  setdata(int x,int y);
	// aur class ke andar declaratiion krna hoga 
	// int setdata(int,int);
int main()
{
complex c1;
c1.setdata(2,3);
c1.showdata();





return 0;
}

