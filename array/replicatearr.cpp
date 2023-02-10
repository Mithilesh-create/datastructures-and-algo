#include <iostream>
using namespace std;
void replicate(int arr[], int n, int replica)
{
    int size = n * replica;
    int *ptr2 = new int[size];
    int index = 0;
    for (int i = 0; i < replica; i++)
    {
        for (int i = 0; i < n; i++)
        {
            ptr2[index] = arr[i];
            index++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << ptr2[i] << " ";
    }
    delete[] ptr2;
}
int main()
{
    int n, replica;
    cin >> n;
    cin >> replica;
    int *ptr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }
    replicate(ptr, n, replica);
    delete[] ptr;
    return 0;
}