#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int powerf(int f,int s)
{
    int temp=f;

    if(s!=0){
      for (int i = 1; i < s; i++) {
        f=f*temp;
      }
      return f;
    }
    else{
        return 1;
    }

}
int main() {
    //Write your code here
    int a,b;
    cin>>a>>b;
powerf(a,b);
    return 0;
    }
