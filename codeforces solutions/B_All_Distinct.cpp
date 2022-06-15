#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        vector<int> v;
        int size;
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        bool flag = true;
        while (flag)
        {
            int temp = v.size();
            for (int i = 0; i < v.size(); i++)
            {
                int temp = v.size();
                for (int j = i + 1; j < v.size(); j++)
                {
                    if (v[i] == v[j])
                    {
                        v.erase(v.begin() + j);
                    }
                }

        }
        if(temp==v.size()){
            flag = false;
        }
        }

        cout << v.size() << endl;
    }
}
