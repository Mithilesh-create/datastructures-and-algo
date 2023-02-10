#include <bits/stdc++.h>
using namespace std;
string leftRotate(string str, int d)
{
    while (d--)
    {
        char c = str[0];
        for (int i = 0; i < str.length(); i++)
        {
            str[i] = str[i + 1];
        }
        str[str.length() - 1] = c;
    }
    return str;
}

string rightRotate(string str, int d)
{
    while (d--)
    {
        char c = str[str.length() - 1];
        for (int i = str.length() - 1; i > 0; i--)
        {
            str[i] = str[i - 1];
        }
        str[0] = c;
    }
    return str;
}
int main()
{
    cout << leftRotate("Hello", 4) << endl;
    cout << rightRotate("Hello", 2) << endl;
    return 0;
}