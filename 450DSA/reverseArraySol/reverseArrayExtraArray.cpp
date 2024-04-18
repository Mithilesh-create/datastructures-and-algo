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

    
    vector<int> B;
    int temp=x-1;
    while(temp>=0){
        B.push_back(A[temp--]);
    }
    for (int i = 0; i < x; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;
    cout << "printed all the values" << endl;
    return 0;
}