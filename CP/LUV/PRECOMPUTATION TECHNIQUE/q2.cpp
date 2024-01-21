#include <bits/stdc++.h>
using namespace std;
vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    // Your code goes here
	    vector<int>v(11);
	    // for(int i=0; i<N; i++)
	    // {
	    //     v[A[i]]++;
        //     cout<<" v[A[i]]"<<A[i]<<" "<<v[A[i]]<<endl;
        //     // cout<<" v[i]"<<v[A[i]]<<endl;
	    // }
 for(int i=0; i<M; i++)
	    {
	        v[B[i]]++;
            cout<<" v[B[i]]"<<B[i]<<" "<<v[B[i]]<<endl;
	    }

vector<long long>ans;
for(int i=0; i<N; i++)
if(v[A[i]]==0)
{
// cout<<"i"<<A[i]<<endl;
ans.push_back(A[i]);
}

return ans;
	} 

int main() {
    // Your code here
    long long arr[6]={1,2,3,4,5,10};
    long long arr2[5]={2,3,1,0,5};

vector<long long>v=findMissing(arr,arr2,6,5);

for(auto it:v)
cout<<it<<" ";

    return 0;
}