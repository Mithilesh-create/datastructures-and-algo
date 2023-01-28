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

int main()
{
    A a1;
    B b1;
    cout << a1.age << endl;
    cout << b1.age << endl;

    return 0;
}