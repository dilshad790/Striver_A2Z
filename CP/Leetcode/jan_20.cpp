// q1
#include <bits/stdc++.h>
using namespace std;
int bitcount(int n)
{
    int cnt = 0;
    for (int i = 31; i >= 0; i--)
    {
        if ((n & (1 << i) )!= 0)
            cnt++;
    }
    return cnt;
}
bool canSortedArray(vector<int> &arr)
{
    bool flag = true;

    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[j - 1])
            {
                flag = false;

                int bit_of_num1 = bitcount(arr[j]);
                // cout<<"BitCnt"<<arr[j]<<" "<<bit_of_num1<<endl;
                int bit_of_num2 = bitcount(arr[j-1]);
                // cout<<"Bit_cnt2 "<<arr[j-1]<<" "<<bit_of_num2<<endl;
                if (bit_of_num1 == bit_of_num2)
                    swap(arr[j], arr[j - 1]);
            }
        }
    }
    if(flag==true)
return true;
    else
    for(int i=1; i<arr.size(); i++)
    {
        if(arr[i]<arr[i-1])
        return false;
        
    }
 return true;
}
int main()
{
    // Your code here
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
     cout<<canSortedArray(v);
cout<<endl;
for(auto it:v)
cout<<it<<" ";
    return 0;
}