#include <bits/stdc++.h>
using namespace std;
string leftRotate(string str, int d)
{
    string result;
    d %= str.length();
    for (int i = d; i < str.length(); i++)
    {
        result += str[i];
    }
    for (int i = 0; i < d; i++)
    {
        result += str[i];
    }
    return result;
}

string rightRotate(string str, int d)
{
    int sLength = str.length();
    string result;
    d %= sLength;
    for (int i = sLength - d; i < str.length(); i++)
    {
        result += str[i];
    }
    for (int i = 0; i < sLength - d; i++)
    {
        result += str[i];
    }
    return result;
}
int main()
{
    cout << leftRotate("Hello", 4) << endl;
    cout << rightRotate("Hello", 2) << endl;
    return 0;
}