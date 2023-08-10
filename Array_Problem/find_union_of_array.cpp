#include<iostream>
#include <bits/stdc++.h>
using namespace std;
vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  map < int, int > freq;
  vector < int > Union;
  for (int i = 0; i < n; i++)
    freq[arr1[i]]++;
  for (int i = 0; i < m; i++)
    freq[arr2[i]]++;
  for (auto & it: freq)
    Union.push_back(it.first);
  return Union;
}

int main()
{
vector<int>arr1(5);
vector<int>arr2(4);
int n=arr1.size();
int m=arr2.size();
cout<<" Enter element in arr1:";
for(int i=0; i<n; i++)
cin>>arr1[i];

cout<<"Enter elements in arr2:";
for(int i=0; i<m; i++)
cin>>arr2.size();

vector<int>result=findUnion(arr1,arr2,n,m);
for(auto &it: result)
{
    cout<<it<<" ";
}

 return 0;
}