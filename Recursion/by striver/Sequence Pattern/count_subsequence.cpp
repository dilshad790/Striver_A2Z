#include <bits/stdc++.h>
using namespace std;
int printS(vector<int>input,int i,int s,int sum)
{
// base case
if(i==input.size())
{
    if(s==sum)
    {
      
        return 1;
    }
    else return 0;
}

s+=input[i];

// include call
int l=printS(input,i+1,s,sum);


s-=input[i];


// exclude call
int r=printS(input,i+1,s,sum);
// return true;

return l+r;


}
int main() {
    // Your code here
    vector<int>input={1,2,1};

// vector<int>output;
int sum=2;
int index=0;
int initial_sum=0;
cout<<printS(input,index,initial_sum,sum);



    return 0;
}