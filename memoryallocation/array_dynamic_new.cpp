#include <iostream>
#include <array>
using namespace std;
int main()
{
    // Write C++ code here
    int x;
    cin >> x;
    int *arr = new int[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}