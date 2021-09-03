// Hashmap
// Time : O(n)
// Space : O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getPairsCount(int arr[], int n, int k)
    {
        // code here
        unordered_map<int, int> mp;

        int ans = 0;
        for (int i = 0; i < n; i++)
        {

            int current = arr[i];

            ans += mp[k - current];

            mp[current]++;
        }

        return ans;
    }
};