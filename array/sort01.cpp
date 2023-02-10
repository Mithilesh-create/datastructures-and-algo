#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 11;
    int arr[] = {1, 0, 0, 0, 1, 1, 0, 1, 0, 1, 0};
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else if (arr[i] != arr[j])
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}
// #include <bits/stdc++.h>
// void sort0and1(int n, vector<int> &A){
//     int l=0;
//     int h=n-1;
//     while(l<h){
//         if(A[l]==0)
//             l++;
//         else if(A[h]==1)
//             h--;
//         else if(A[l]!=A[h]){
//             swap(A[l],A[h]);
//             l++;
//             h--;
//         }
//     }
// }