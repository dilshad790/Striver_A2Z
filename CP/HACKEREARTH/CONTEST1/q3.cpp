 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {
     // Your code here
     int t;
	 cin>>t;
	 while(t--)
	 {
		int n;
		cin>>n;
string s;
cin>>s;
long long result=0;
int j=0;
for(int i=s.size()-1; i>=0; i--)
{
	 int binary_digit=s[i]-'0';
result=result+binary_digit*pow(2,j);
j++;
}
cout<<result<<endl;
}

     return 0;
 }