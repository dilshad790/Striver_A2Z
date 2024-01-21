#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    vector<int>v={1,6,0,11,23,2,45};
    int min=*min_element(v.begin(),v.end());
    int max=*max_element(v.begin(),v.end());
    cout<<min<<" "<<max<<endl;

// sum of elment of vector 1,6,0,11,23,2,45
int sum=accumulate(v.begin(),v.end(),0); // we need to provide initila sum that is 0,
int sum2=accumulate(v.begin(),v.end(),3); // we need to provide initila sum that is 3,
cout<<sum<<" "<<sum2<<endl;

// count repeatation of number  1,6,0,11,23,2,45
int cnt=count(v.begin(),v.end(),2);
cout<<" 2 kitne baa aaya hai:"<<cnt<<endl;


// find or search element 1,6,0,11,23,2,45
auto it=find(v.begin(),v.end(),10);
if(it==v.end())
cout<<"element not found"<<endl;
else cout<<*it<<endl;

// reverse function 1,6,0,11,23,2,45
// reverse(v.begin(),v.end());
// for(auto it:v)
// cout<<it<<" ";
// cout<<endl;

reverse(v.begin()+1,v.end());
for(auto it:v)
cout<<it<<" ";
cout<<endl;

// reverse stirng 
string s="absbdbfkf";
reverse(s.begin(),s.end());
for(auto it:s)
cout<<it<<" ";
cout<<endl;


    return 0;
}