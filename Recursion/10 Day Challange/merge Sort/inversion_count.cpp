#include <bits/stdc++.h>
using namespace std;
int inversion_Count(vector<int>v)
{
    int cnt=0;
    for(int i=0; i<v.size()-1; i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            if(v[i]>v[j])
            cnt++;
        }
    }
    return cnt;
}


int main() {
    // Your code here
vector<int>v={8,4,2,1};
    cout<<inversion_Count(v);
    return 0;
}