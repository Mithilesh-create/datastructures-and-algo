#include <bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &A, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int temp = A[start];
    A[start] = A[end];
    A[end] = temp;
    reverseArray(A, ++start, --end);
}
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
    int end = x - 1;
    reverseArray(A, start, end);
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "printed all the values" << endl;
    return 0;
}


// // Recursive C++ program to reverse an array 
// #include <bits/stdc++.h> 
// using namespace std; 

// /* Function to reverse arr[] from start to end*/
// void rvereseArray(int arr[], int start, int end) 
// { 
// 	if (start >= end) 
// 	return; 
	
// 	int temp = arr[start]; 
// 	arr[start] = arr[end]; 
// 	arr[end] = temp; 
	
// 	// Recursive Function calling 
// 	rvereseArray(arr, start + 1, end - 1); 
// }	 


// /* Utility function to print an array */
// void printArray(int arr[], int size) 
// { 
// for (int i = 0; i < size; i++) 
// cout << arr[i] << " "; 

// cout << endl; 
// } 

// /* Driver function to test above functions */
// int main() 
// { 
// 	int arr[] = {1, 2, 3, 4, 5, 6}; 
	
// 	// To print original array 
// 	printArray(arr, 6); 
	
// 	// Function calling 
// 	rvereseArray(arr, 0, 5); 
	
// 	cout << "Reversed array is" << endl; 
	
// 	// To print the Reversed array 
// 	printArray(arr, 6); 
	
// 	return 0; 
// } 
