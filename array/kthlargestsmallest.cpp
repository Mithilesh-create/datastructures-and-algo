#include <iostream>
using namespace std;

void kthSmallestLargest(int arr[], int n, int k)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    int n = 7;
    int arr[n] = {2, 1, 5, 6, 3, 3, 8};
    int k = 2;
    kthSmallestLargest(arr, n, k);
    return 0;
}