#include <bits/stdc++.h>
using namespace std;
void merge(int *arr1, int n, int *arr2, int m)
{
    int i = 0;
    int j = 0;
    int arr3[m + n];
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            arr3[k++] = arr2[j++];
        }
        else
        {
            arr3[k++] = arr1[i++];
        }
    }
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }

    for (int i = 0; i < m + n; i++)
    {
        cout << arr3[i] << " ";
    }
}
int main()
{
    int n = 5;
    int m = 5;
    int arr1[n] = {1, 2, 4, 5, 6};
    int arr2[m] = {0, 0, 0, 3, 7};
    merge(arr1, n, arr2, m);

    return 0;
}