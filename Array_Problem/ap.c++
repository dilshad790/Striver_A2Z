#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>&v,int n)
{
    set<int>s;
    for(int i=0; i<v.size(); i++)
    {
        s.insert(v[i]);
    }
    int sizeof_set=s.size();
    
    // copy all element set to vector
    int j=0;
    for(int it :s)
    {
v[j++]=it;
    }
    return sizeof_set;
}

int main()
{
vector<int>v={1,2,2,3,5,4,3};
int n=v.size();
int k=removeDuplicates(v,n);
for(int i=0; i<k; i++)
{
    cout<<v[i]<<" ";
}
 return 0;
}