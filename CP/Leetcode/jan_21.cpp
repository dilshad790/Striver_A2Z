#include <bits/stdc++.h>
using namespace std;
int minimumCost(string &s)
{
    int cost=0;

    for(int i=0; i<s.length(); i++)
    {
if(s[i]=='a' || s[i]=='d' || s[i]=='g' || s[i]=='j' || s[i]=='m' || s[i]=='p' || s[i]=='t' || s[i]=='w')
cost+=1;

else if(s[i]=='b' || s[i]=='e' || s[i]=='h' || s[i]=='k' || s[i]=='n' || s[i]=='q' || s[i]=='u' || s[i]=='x')
cost+=2;

else if(s[i]=='c' || s[i]=='f' || s[i]=='i' || s[i]=='l' || s[i]=='o' || s[i]=='r' || s[i]=='v' || s[i]=='y')
cost+=3;

else if(s[i]=='s' || s[i]=='z')
cost+=4;

    }
    return cost;
}


int main() {
    // Your code here
    int n;
    cin>>n;
    vector<int> v;

for(int i=0; i<n; i++)
cin>>v[i];

    return 0;
}