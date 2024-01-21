#include <bits/stdc++.h>
using namespace std;
 int trailing_zero(int x)
    {
        int arr[32];
        int i=0;
        while(x>0)
        {
            arr[i]=x%2;
            x=x/2;
            i++;
        }
        cout<<arr[0]<<endl;
        return arr[0];
        
    }
    bool hasTrailingZeros(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                int x=nums[i] | nums[j];
                cout<<x<<endl;
                if(trailing_zero(x)==0)
                    return true;
                
            }
        }
        return false;
    }
int main() {
    // Your code here
    vector<int>v={1,2};
    cout<<hasTrailingZeros(v);
    return 0;
}