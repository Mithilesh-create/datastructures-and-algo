#include <iostream>
#include <array>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int *ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
    }
    free(ptr);
    return 0;
}