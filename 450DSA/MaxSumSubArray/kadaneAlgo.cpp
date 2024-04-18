#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin >> input;
    vector<int> arr;
    int x;
    for (int i = 0; i < input; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    for (int i = 0; i < input; i++)
    {
        max_ending_here += arr[i];
        if (max_ending_here > max_so_far)
        {
            max_so_far = max_ending_here;
        }
        else if (max_ending_here < 0)
        {
            max_ending_here = 0;
        }
    }
    cout << max_so_far << "";
    cout << endl;
    return 0;
}