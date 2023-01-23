#include <iostream>
using namespace std;
void binarySearch(int arr[], int start, int end, int find)
{
    int mid = (start + end) / 2;
    if (find == arr[mid])
    {
        cout << mid << endl;
    }
    else
    {
        if (find < arr[mid])
        {
            end = mid - 1;
            binarySearch(arr, start, end, find);
        }
        else
        {
            start = mid + 1;
            binarySearch(arr, start, end, find);
        }
    }
}
int main()
{
    int start, end, elementToFind;
    int arr[] = {1, 4, 6, 9, 10, 20, 34, 45, 55};
    start = 0;
    end = (sizeof(arr) / sizeof(arr[0])) - 1;
    elementToFind = 45;

    binarySearch(arr, start, end, elementToFind);
}