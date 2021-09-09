
// Time  : O(n)
// Space : O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int bs(string &s, int l, char x)
    {

        // rightmost smallest
        int r = s.length();

        while (r - l > 1)
        {

            int m = (l + r) >> 1;

            if (s[m] < x)
                l = m;
            else
                r = m;
        }

        return l;
    }

    string prevPermutation(string s)
    {
        // code here

        auto &A = s;
        int n = s.length();
        int i = n - 2;

        while (i >= 0)
        {

            if (A[i] > A[i + 1])
            {

                int j = bs(A, i, A[i]);
                swap(A[i], A[j]);
                reverse(A.begin() + i + 1, A.end());
                return s;
            }
            --i;
        }

        return "None";
    }
};