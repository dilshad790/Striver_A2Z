#include <iostream>
using namespace std;
int main()
{
int n=8394;
int d=n%10;
cout<<d<<endl;

pair<int,string> p;
// pair inititialization
//p=make_pair(2,"Dilshad");// m1
 //p={2,"abc"}; // m2
 p.first=3;
 p.second="Dilshad";

cout<<p.first<<" "<<p.second<<endl;

// copy one pair to another pair
//pair<int,string> p1=p;
// p1.first=5; 
// this will print same value p& p1 because p1 is the copy of p;
pair<int,string> &p1=p;
p1.first=5;// it will not be printed bcz p1 is cpy of p
cout<<p1.first<<" "<<p1.second<<endl;

// if we want to change the value of p using p1 the we have to use refrence operator(&) 


return 0;
}

