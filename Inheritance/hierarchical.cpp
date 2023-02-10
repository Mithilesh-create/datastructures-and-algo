#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    string eat = "Eating";
};
class Dog : public Animal
{
public:
    string cry = "Bark";
};
class Cat : public Animal
{
public:
    string cry = "Meow";
};
int main()
{
    Dog d1;
    Cat c1;
    cout << d1.cry << " " << d1.eat << endl;
    cout << c1.cry << " " << c1.eat << endl;

    return 0;
}