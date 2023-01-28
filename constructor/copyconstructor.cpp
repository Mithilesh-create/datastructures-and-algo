#include <iostream>
using namespace std;
class rect
{
    int a, b;

public:
    rect(int x, int y)
    {
        a = x;
        b = y;
    }
    rect(const rect &p2)
    {
        a = p2.a;
        b = p2.b;
    }
    int getX()
    {
        return a;
    }
    int getY()
    {
        return b;
    }
};
int main()
{
    rect r1(10, 20);
    rect r2 = r1;

    cout << r1.getX() << " " << r1.getY() << endl;
    cout << r2.getX() << " " << r2.getY() << endl;

    return 0;
}