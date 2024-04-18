#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    vector<int> A;
    for (int i = 0; i < x; i++)
    {
        int elm;
        cin >> elm;
        A.push_back(elm);
    }

    int start = 0;
    int end = x-1;
    while (start < end)
    {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "printed all the values" << endl;
    return 0;
}