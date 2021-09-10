
// Sorting

// Time : O(NlogN)
// Space : O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int find_median(vector<int> v)
    {
        // Code here.

        sort(v.begin(), v.end());

        int n = v.size();

        if (n & 1)
        {

            // 0 1 2 3 4  n = 5
            return v[n / 2];
        }
        else
        {

            // 0 1 2 3 4 5 n = 6
            return (v[n / 2 - 1] + v[n / 2]) / 2;
        }
    }
};