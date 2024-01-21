#include <iostream>
#include <vector>
using namespace std;
int main()
{
vector <int> v1(5,1);
vector <char> v2(5,'a');
vector <float> v3(5,3.2);
for(int i=0; i<5; i++)
cout<<"v1= "<<v1[i]<<endl;

for(int i=0; i<5; i++)
cout<<"v2= "<<v2[i]<<endl;

for(int i=0; i<5; i++)
cout<<" v3="<<v3[i]<<endl;




return 0;
}

