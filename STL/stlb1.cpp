// pair
#include<iostream>
#include<utility>
using namespace std;
int main()
{
	pair<int,int>p1;// define 1st way
	p1.first=10;
	p1.second=20; 
	cout<<p1.first<<" ";
	cout<<p1.second<<endl;
	
	// 2nd way
	pair<int ,string>p2(1,"dil");
	cout<<p2.first<<" "<<p2.second<<endl;
	// 3rd way
	pair<int,string>p3;
	p3=make_pair(3,"gfg");
	cout<<p3.first<<" "<<p3.second<<endl;
	
	// copy of pair into pair2
	pair <int,string>p4(p3); // pair should define same as p3
	cout<<p4.first<<" "<<p4.second<<endl;
	
	cout<<"Before swaping"<<endl;
	pair<int,int>pair1(10,20);
	// bofore swapping
	cout<<pair1.first<<" "<<pair1.second<<endl;
	
	pair<int,int>pair2(50,60);
	cout<<pair2.first<<" "<<pair2.second<<endl;
	
	// after swaped
	cout<<"After swaped"<<endl;
	pair1.swap(pair2);
	cout<<pair1.first<<" "<<pair1.second<<endl;
	cout<<pair2.first<<" "<<pair2.second<<endl;
}
