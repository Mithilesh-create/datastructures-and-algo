#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // Write C++ code here
    string str = "Hello world ho ho ho";
    string word;
    string reversed;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            reverse(word.begin(), word.end());
            word += ' ';
            reversed += word;
            word = "";
        }
        else
        {
            word += str[i];
        }
    }
    reverse(word.begin(), word.end());
    reversed += word;
    cout << reversed << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "Hello world ho ho ho";
    string word;
    string reversed;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            reverse(word.begin(), word.end());
            word += ' ';
            reversed += word;
            word = "";
        }
        else
        {
            word += str[i];
        }
    }
    reverse(word.begin(), word.end());
    reversed += word;
    reverse(reversed.begin(), reversed.end());
    cout << reversed << endl;
    return 0;
}
