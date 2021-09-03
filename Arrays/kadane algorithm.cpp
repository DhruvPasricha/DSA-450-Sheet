// Time : O(n)
// Space : O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {

        // Your code here
        long long ans = arr[0];
        long long sum = arr[0];

        for (int i = 1; i < n; i++)
        {

            long long current = arr[i];

            sum = max(current, current + sum);

            ans = max(sum, ans);
        }
        return ans;
    }
};