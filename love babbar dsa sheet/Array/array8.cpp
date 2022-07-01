#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
        long long mxsum = INT_MIN;
        int cursum = 0;
        int i = 0;

        while (i <= n - 1)
        {
            cursum += arr[i];
            if (cursum > mxsum)
            {
                mxsum = cursum;
            }
            if (cursum < 0)
            {
                cursum = 0;
            }
            i++;
        }
        return mxsum;
    }
};
