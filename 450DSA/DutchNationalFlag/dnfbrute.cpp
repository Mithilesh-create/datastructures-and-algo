#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[11] = {2, 2, 1, 1, 2, 2, 0, 0, 0, 1, 2};
    int zero = 0;
    int one = 0;
    int two = 0;
    for (int i = 0; i < 11; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    for (int i = 0; i < zero; i++)
    {
        arr[i] = 0;
    }
    for (int i = zero; i < (zero + one); i++)
    {
        arr[i] = 1;
    }
    for (int i = (zero + one); i < (zero + one + two); i++)
    {
        arr[i] = 2;
    }
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
