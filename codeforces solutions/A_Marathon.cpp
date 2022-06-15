#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        int a, b, c, d;
        int cnt = 0;
        cin >> a >> b >> c >> d;
        if(b>a)
        {
            cnt++;
        }
        if(c>a)
        {
            cnt++;
        }
        if(d>a)
        {
            cnt++;
        }
        cout << cnt << endl;
    }
}
