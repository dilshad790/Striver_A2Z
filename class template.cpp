#include <iostream>
using namespace std;

template <class X> 
class cons // class name
{
X a,b;
public:
 cons(X s,X t)  // constructor
{
a=s;
b=t;
}
int display()
{
	cout<<a<<" "<<b;
}
};
int main()
{

cons<int> obj1(1,2); // way of calling class template
cons<float> obj2(3.4,5.2);
cons<char> obj3('A','B');
obj1.display();
obj2.display();
obj3 .display();
return 0;
}

