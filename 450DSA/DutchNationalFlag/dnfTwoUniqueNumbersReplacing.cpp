#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[11] = {1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0};
    int left = 0;
    int right = 10;
    while (left < right)
    {
        if (arr[left] == 0 && left < right)
        {
            left++;
        }
        if (arr[right] == 1 && left < right)
        {
            right--;
        }
        if (left < right)
        {

            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
