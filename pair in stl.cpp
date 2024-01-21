#include <iostream>
using namespace std;
class student 
{
	private:
		string name;
		int age;
		public:
			int setadata(string s,int x)
			{
				name=s;
				age=x;
				
			}
			int showdata()
			{
				cout<<" "<<name<<" "<<age;
			}
};

int main()
{
pair <int,string>p1;
pair <float,string>p2;
pair <int,float>p3;
p1<make_pair>(3,Dilshad);
p2<make_pair>(3.6,Dilshad);
p3<make_pair>(76,99);
cout<<p1.first<<" "<<p1.second;





return 0;
}

