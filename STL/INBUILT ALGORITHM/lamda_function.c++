#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
   cout<< [](int x){return x+2;}(3)<<endl; // lambda function
   auto sum=[](int x,int y){return x+y;}; // lambda function

   cout<<sum(5,4)<<endl;

// all_of() 
vector<int>v={2,3,4,51};
cout<<all_of(v.begin(),v.end(),[](int x){return x>0;});


    return 0;
}