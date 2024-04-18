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

    stack<int> B;
    for (int i = 0; i < x; i++)
    {
        B.push(A[i]);
    }
    int i = 0;
    while (!B.empty())
    {
        A[i++] = B.top();
        B.pop();
    }
    for (int i = 0; i < x; i++)
    {
        cout<<A[i]<<" ";
    }

    cout << endl;
    cout << "printed all the values" << endl;
    return 0;
}