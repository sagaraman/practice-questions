#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    char arr[n];
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    int j = 1;
    while(j<=t)
    {
        for (int i = 0; i+1 < n;i++)
        {
            if(arr[i]=='B'&&arr[i+1]=='G')
            {
                arr[i] = 'G';
                arr[i + 1] = 'B';
                i += 1;
            }
        }
        j++;
    }
    for (int i = 0; i < n;i++)
    {
        cout << arr[i];
    }
}
