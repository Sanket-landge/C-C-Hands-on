#include<iostream>
using namespace std;
class Animal
{
    public:
    void eat(){
        cout<<"Eating...";
    }
};
class Dog: public Animal
{
    public:
    void bark(){
        cout<<"Barking..";
    }
};
class Babydog: public Dog
{
    public:
    void weep()
    {
        cout<<"weeping";
    }
};
int main(){
    Dog d1;
    d1.eat();
    d1.bark();
    d1.weep();

    return 0;
}