#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int cnt = 0;
        bool is_prime = true;
        for (int i = x; i <= y; i++)
        {
            for (int j = 2; j < x / 2; j++)
            {
                if (i % j == 0)
                {
                    is_prime = false;
                }
            }
            if (is_prime)
            {
                cnt++;
                cout << cnt << " " << i << "\n";
            }
        }
    }
}
