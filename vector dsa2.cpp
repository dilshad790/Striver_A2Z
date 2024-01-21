#include <iostream>
#include <vector>
using namespace std;


int main()
{
vector <int> v1{1,2,3,4,5};
v1.push_back(6);
for(int i=0;i<=5; i++)
cout<<v1[i]<<endl;

v1.pop_back();
for(int i=0; i<v1.size(); i++)
cout<<v1[i];






return 0;
}

