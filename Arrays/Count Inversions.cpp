// Merge Sort
// Time : O(nlogn)
// Space : O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
#define ll long long int

    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.

    ll merge(ll arr[], ll s1, ll e1, ll s2, ll e2)
    {

        ll start = s1;
        ll temp[e2 - s1 + 1];
        ll k = 0;

        ll ans = 0;

        while (s1 <= e1 and s2 <= e2)
        {

            if (arr[s1] <= arr[s2])
            {
                temp[k++] = arr[s1++];
            }
            else
            {
                temp[k++] = arr[s2++];
                ans += (e1 - s1 + 1);
            }
        }

        while (s1 <= e1)
        {
            temp[k++] = arr[s1++];
        }

        while (s2 <= e2)
        {
            temp[k++] = arr[s2++];
        }

        for (int i = start; i <= e2; i++)
            arr[i] = temp[i - start];

        return ans;
    }

    ll solve(ll arr[], ll start, ll end)
    {

        if (start >= end)
            return 0;

        ll m = (start + end) >> 1;
        ll ans1 = solve(arr, start, m);
        ll ans2 = solve(arr, m + 1, end);
        ll ans3 = merge(arr, start, m, m + 1, end);

        return ans1 + ans2 + ans3;
    }

    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        ll ans = solve(arr, 0, N - 1);

        return ans;
    }
};