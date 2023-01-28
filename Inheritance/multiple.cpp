#include <iostream>
#include <string>
using namespace std;
class A
{
public:
    int age = 10;
};
class B
{
public:
    string name = "Mithilesh";
};
class C
{
public:
    float x = 10.11;
};
class D : public A, public B, public C
{
};
int main()
{
    A a1;
    B b1;
    C c1;
    D d1;
    cout << a1.age << endl;
    cout << b1.name << endl;
    cout << c1.x << endl;

    cout << d1.name << " " << d1.age << " " << d1.x << endl;

    return 0;
}