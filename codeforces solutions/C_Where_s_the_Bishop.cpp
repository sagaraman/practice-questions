#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    bool flag = false;
    while (t--)
    {
        char chess[9][9];
        for (int i = 1; i < 9; i++)
        {
            for (int j = 1; j < 9; j++)
            {
                cin >> chess[i][j];
            }
        }
        for (int i = 1; i < 9; i++)
        {
            for (int j = 1; j < 9; j++)
            {
                if (chess[i - 1][j - 1] == '#' && chess[i - 1][j + 1] == '#' && chess[i+1][j-1]=='#'&& chess[i+1][j+1]=='#')
                {
                    cout << i << " " << j << "\n";
                    flag = true;
                    break;
                }
            }

        }
    }
}
