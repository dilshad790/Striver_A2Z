#include<iostream>
using namespace std;
 class Hero{
private:
int health;
public:
char level;
int gethealth()
{
    return health;
}

Hero(int h)
{
    this->health=h;
    cout<<"add of this:"<<this<<endl;
    
}



};

int main()
{
Hero ramesh(70);
cout<<"add of ramesh"<<&ramesh<<endl;
 return 0;
}