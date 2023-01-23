#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 4, 6, 9, 10, 20, 34, 45, 55};
    int start = 0;
    int end = (sizeof(arr) / sizeof(arr[0])) - 1;
    int mid;
    int elementToFind = 9;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == elementToFind)
        {
            cout << mid << endl;
            break;
        }
        else
        {
            if (arr[mid] > elementToFind)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }

    return 0;
}