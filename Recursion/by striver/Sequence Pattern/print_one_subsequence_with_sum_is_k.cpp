#include <bits/stdc++.h>
using namespace std;
bool printS(vector<int>input,vector<int>&output,int i,int s,int sum)
{
// base case
if(i==input.size())
{
    if(s==sum)
    {
        for(auto it:output)
        {
            cout<<it<<" ";
        }
        return true;
    }
    else return false;
}
output.push_back(input[i]);
s+=input[i];

// include call
if(printS(input,output,i+1,s,sum)==true)
return true;

s-=input[i];
output.pop_back();

// exclude call
if(printS(input,output,i+1,s,sum)==true)
return true;

return false;

}
int main() {
    // Your code here
    vector<int>input={1,2,1};

vector<int>output;
int sum=2;
int index=0;
int initial_sum=0;
printS(input,output,index,initial_sum,sum);



    return 0;
}