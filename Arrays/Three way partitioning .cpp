

// Same as sort 0 1 2

// Time  : O(N)
// Space : O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to partition the array around the range such
    //that array is divided into three parts.
    void threeWayPartition(vector<int> &arr, int a, int b)
    {
        // code here
        int n = arr.size();
        int i = 0;
        int mid = 0;
        int j = n - 1;

        while (mid <= j)
        {

            // < a (0)
            if (arr[mid] < a)
            {
                swap(arr[mid], arr[i]);
                i++;
                mid++;
            }
            // > b (2)
            else if (arr[mid] > b)
            {
                swap(arr[mid], arr[j]);
                j--;
            }
            // >= a and <= b (1)
            else
            {
                mid++;
            }
        }
    }
};
