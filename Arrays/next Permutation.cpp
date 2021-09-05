// Binary Search + basic Observations
// Time : O(n)
// Space : O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int greater(vector<int> &A, int l, int r)
    {

        int x = A[l];
        while (r - l > 1)
        {

            int m = (l + r) >> 1;

            if (A[m] > x)
                l = m;
            else
                r = m;
        }
        return l;
    }

    void nextPermutation(vector<int> &nums)
    {

        auto &A = nums;
        int n = nums.size();

        for (int i = n - 2; i >= 0; i--)
        {

            if (A[i] < A[i + 1])
            {

                int x = greater(A, i, n); // rightmost strictly greater than A[i]
                swap(A[i], A[x]);
                reverse(A.begin() + i + 1, A.end());
                return;
            }
        }

        reverse(A.begin(), A.end());
    }
};