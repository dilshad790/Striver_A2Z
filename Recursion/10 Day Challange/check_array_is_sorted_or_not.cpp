#include <bits/stdc++.h> 
// check array is sorted or not using recursion
using namespace std;
bool check_sorted(vector<int>&v,int &n, int i)
{
    if(i==n-1)
    return true;

    if(v[i+1]<v[i])
    return false;

    return check_sorted(v,n,i+1);
}
int main() {
    // Your code here
    vector<int>v={2,3,4,6,5};
    int n=v.size();
    int i=0;
   cout<< check_sorted(v,n,i);

    return 0;
}