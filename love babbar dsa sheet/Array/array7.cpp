#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        temp[i] = arr[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
