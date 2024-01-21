#include <bits/stdc++.h>
using namespace std;

void insertion_Sort(vector<int>&v)
{
    for(int i=1; i<v.size(); i++)
    {
        int temp=v[i];
        int j=i-1;
        while(j>=0)
        {
            if(v[j]>temp)
            v[j+1]=v[j];
            else break;
            j--;
        }
        v[j+1]=temp;
    }
}

int main() {
    // Your code here
    vector<int>v={10,1,7,4,8,11};
    insertion_Sort(v);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}