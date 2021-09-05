// Two Pointer
// Time : O(nlogn + n*n)
// Space : O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to find if there exists a triplet in the
    //array A[] which sums up to X.

    bool twoPointer(int A[], int size, int target)
    {

        int s = 0;
        int e = size - 1;

        while (s < e)
        {

            if (A[s] + A[e] == target)
            {
                return true;
            }
            else if (A[s] + A[e] < target)
            {
                s++;
            }
            else
            {
                e--;
            }
        }

        return false;
    }

    bool find3Numbers(int A[], int n, int X)
    {
        sort(A, A + n);

        for (int i = 0; i < n; i++)
        {
            bool found = twoPointer(A + i + 1, n - i - 1, X - A[i]);
            if (found)
                return true;
        }

        return false;
    }
};