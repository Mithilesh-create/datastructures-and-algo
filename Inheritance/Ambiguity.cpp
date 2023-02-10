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
    int age = 12;
};
class C : public A, public B
{
public:
};
int main()
{
    C c1;

    cout << c1.B::age << endl;
    cout << c1.A::age << endl;

    return 0;
}