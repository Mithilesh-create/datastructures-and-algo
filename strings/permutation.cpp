#include <bits/stdc++.h>
#include <cstring>
#include <iostream>
using namespace std;

bool isPermutation(char input1[], char input2[])
{
    int size = strlen(input1);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (int(input1[i]) > int(input1[j]))
            {
                swap(input1[i], input1[j]);
            }
            if (int(input2[i]) > int(input2[j]))
            {
                swap(input2[i], input2[j]);
            }
        }
    }

    if (strcmp(input1, input2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}