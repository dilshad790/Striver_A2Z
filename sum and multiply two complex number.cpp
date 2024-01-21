/* #include <iostream>
using namespace std;


int main()
{


return 0;
}
*/
#include<iostream>

using namespace std;

class complex{
    // Complete this class
    private :
 int a,b;   
 public:
    int setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    complex add(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    complex multiply(complex m)
    {
        complex temp;
        
        temp.a=a*m.a-b*m.b;
        temp.b=a*m.b+b*m.a;
       
        return temp;
    }
    int showdata()
    {
        cout<<a<<" + i"<<b;
    }
    
};
    
    int main()
    {
        int real1,real2,imaginary1,imaginary2,choice;
        complex c1,c2,c3;
     cin>>real1>>imaginary1;
     cin>>real2>>imaginary2;
     cin>>choice;
    
                
        c1.setdata(real1,imaginary1);
        c2.setdata(real2,imaginary2);
        if(choice==1){ 
       c3= c1.add(c2);}
     else if(choice==2){
        c3= c1.multiply(c2);}
     
        
      //  c3=c1.add(c2);
    //  c3=c1.multiply(c2);
     c3.showdata();
         
    }
