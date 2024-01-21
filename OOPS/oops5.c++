#include<iostream>
using namespace std;
// copy constructor
class Hero{
    int health;
    public:
    char level;
    Hero(int health,char level)
    {
        this->health=health;
        this->level=level;
    }
    Hero(Hero& temp)// agar hmlg copy constructor ni banaenge to default copy constructor create 
    // comment krke dekhlo
    {
        cout<<"copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print()
    {
        cout<<health<<endl;
        cout<<level<<endl;
    }
    
};
int main()
{
    Hero S(30,'B');
    S.print();
    Hero R(S);// default copy constructor created
    R.print();
 return 0;
}