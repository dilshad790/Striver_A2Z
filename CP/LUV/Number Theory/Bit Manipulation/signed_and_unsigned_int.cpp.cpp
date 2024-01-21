#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    // unsigned to signed integer
   unsigned int x=2147483649;
   int y=x; // signend integer is getting overflow 
   cout<<y<<endl;

// signed integr to unsigend ineteger
int num1=-8;
unsigned int num2=num1;
cout<<num2<<endl;


    return 0;
}