
// Time : O(N)
// Space : O(N)

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    long long trappingWater(int arr[], int n)
    {

        vector<int> suffixMax(n);

        suffixMax[n - 1] = arr[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            suffixMax[i] = max(arr[i], suffixMax[i + 1]);
        }

        int leftMax = arr[0];
        long long int ans = 0;
        for (int i = 1; i < n - 1; i++)
        {
            leftMax = max(leftMax, arr[i]);
            ans += (long long int)(min(leftMax, suffixMax[i]) - arr[i]);
        }

        return ans;
    }
};