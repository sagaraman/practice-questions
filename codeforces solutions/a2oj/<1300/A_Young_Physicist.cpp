#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][3];
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            if(j==0)
            {
                a += arr[i][j];
            }
            if(j==1)
            {
                b += arr[i][j];
            }
            if(j==2)
            {
                c += arr[i][j];
            }
        }
    }
    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
            {
                cout << "YES\n";
            }
        }
    }
    else
    {
        cout << "NO\n";
    }
}
