#include <iostream>
#include <string>
using namespace std;
class A
{
public:
    int age = 10;
};
class B : public A
{
public:
    string name = "Mithilesh";
};
class C : public B
{
public:
    float x = 10.11;
};

int main()
{
    C c1;
    cout << c1.age << endl;
    cout << c1.name << endl;
    cout << c1.x << endl;

    return 0;
}