#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
long long gcd(long long A,long long B)
  {
   if(B==0) 
        {return A;
        }
        
       return gcd(B ,  A%B);
      
  }
       
        long long lcm(long long A,long long B)
        {
            return (A*B)/lcm(A ,B);
        }
    
        
        
    vector<long long>lcmAndGcd(long long A , long long B) {
        // code here
    vector<long long>ans(2);
    ans[0]=lcm(A,B);
    ans[1]=gcd(A,B);
    return ans;
        
    } 
        };
        
        int main(){
            int t;
            cout<<" Enter test case:";
            cin>>t;
            while(t--)
            {
                long long A,B;
                cin>>A>>B;

                Solution obj;
                vector<long long>ans=obj.lcmAndGcd(A,B);
                cout<<ans[0]<<" "<<ans[1];
            }
            return 0;
        }
    
        