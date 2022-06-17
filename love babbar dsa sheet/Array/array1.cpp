#include <bits/stdc++.h>
using namespace std;
// User function Template for C++

string reverseWord(string str)
{

    int i = 0;
    int j = str.size() - 1;
    while (i < j)
    {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}
