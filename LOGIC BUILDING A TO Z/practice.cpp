#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
int bsal;
char grade;

cin>>bsal>>grade;

int allow;

if(grade=='A')
{
    allow=1700;

}
else if(grade=='B')
{
    allow=1500;
}
else{
    allow=1300;
}
float da=(0.5*bsal);
float hra=(0.2*bsal);
float pf;
pf=(0.11*bsal);
float totalsal;
totalsal=(bsal+hra+da+allow-pf);
cout<<(int)round(totalsal);
    return 0;
}

