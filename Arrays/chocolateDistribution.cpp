
// Sorting + Sliding Window

// Time : O(NlogN + N)
// Space : O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        //code

        sort(a.begin(), a.end());
        long long ans = INT64_MAX;
        for (int i = 0, j = m - 1; j < n; i++, j++)
        {
            long long Min = a[i];
            long long Max = a[j];

            ans = min(ans, Max - Min);
        }

        return ans;
    }
};