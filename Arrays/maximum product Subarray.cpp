

// maxPositive : maxPositive product ending at ith index
// maxNegative : maxNegative(in magnitude) ending at ith index


// if any of them == INT_MIN => it doesn't exist 


// Time : O(N)
// Space : O(1)

#include <bits/stdc++.h>

using namespace std;


class Solution
{
public:
    long long maxProduct(vector<int> arr, int n)
    {

        long long pre = 1;
        long long ans = INT_MIN;

        long long maxPositive = INT_MIN;
        long long maxNegative = INT_MIN;

        for (int x : arr)
        {

            long long x_ = x;
            long long mxP, mxN;

            if (x_ > 0)
            {

                mxP = (maxPositive == INT_MIN) ? x_ : maxPositive * x_;
                mxN = (maxNegative == INT_MIN) ? INT_MIN : maxNegative * x_;
            }
            else if (x_ == 0)
            {
                mxP = INT_MIN;
                mxN = INT_MIN;
            }
            else
            {

                mxP = (maxNegative == INT_MIN) ? INT_MIN : maxNegative * x_;
                mxN = (maxPositive == INT_MIN) ? x_ : maxPositive * x_;
            }

            ans = max(ans, max(x_, max(mxP, mxN)));
            maxPositive = mxP;
            maxNegative = mxN;
        }

        return ans;
    }
};

