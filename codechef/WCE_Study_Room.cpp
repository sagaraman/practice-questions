#include<iostream>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        int N, K;
        cin >> N >> K;
        if(N<K)
        {
            cout << N << "\n";
        }
        else
        {
            cout << K - (abs(N - K) / 3 + 1)<<"\n";
        }
    }
}
