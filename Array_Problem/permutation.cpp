#include<iostream>
#include<bits/stdc++.h>
using namespace std;

	void recurPermute(int index,vector<int>&nums,vector<vector<int>>&ans)
	{
		if(index==nums.size()){
			ans.push_back(nums);
			return;
		}

		for(int i=index; i<nums.size(); i++)
		{
			swap(nums[index],nums[i]);
			return recurPermute(index+1,nums,ans);
			swap(nums[index],nums[i]);
		}
	}

	vector<vector<int>> permute(vector<int>&nums){
		vector<vector<int>>ans;
		recurPermute(0,nums,ans);
		return ans;
	}




int main(){
	
// #ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
// #endif

vector<int>v={1,2,3};

vector<vector<int>> v1=permute(v);
 for (auto x : v1) {
        for (auto y : x) {
            cout << y << " ";
        }
        cout << endl;
    }
	return 0;

}
