#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        int size;
        cin >> size;
        vector<int> v;
        for (int i = 0; i < size;i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        for (int i = 0; i < v.size();i++)
        {
            if(i+2<v.size()&&v[i]+v[i+1]+v[i+2]>99)
            {
                cout << "YES\n";
                break;
            }
            else
            {
                if(i+2>v.size())
                {
                    cout << "NO\n";
                    break;
                }

                if(i+2<v.size())
                {
                    i++;
                }
            }
        }
    }
}
