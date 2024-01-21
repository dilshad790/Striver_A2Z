#include <bits/stdc++.h>
using namespace std;
    
        // Your code here
       void wavy_array(vector<int>&arr) {
        for(int i=0; i<arr.size(); i=i+2)
        {
            if(arr[i]<arr[i+1] && i<arr.size() && i+1<arr.size())
            swap(arr[i],arr[i+1]);
        }
        
    }

    void print(vector<int>&v)
    {
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
int main() {
    // Your code here
    vector<int>v={1,2,3,4,5,6,7,8};
    wavy_array(v);
    print(v);
    return 0;
}