// Same as Sort 0 1
// Time : O(N)
// Space : O(1)

#include <bits/stdc++.h>
using namespace std;

vector<int> separateNegativeAndPositive(vector<int> &nums)
{

    int i = 0;
    int j = int(nums.size()) - 1;

    auto &arr = nums;

    while (i < j)
    {
        if (arr[i] >= 0)
        {
            swap(arr[i], arr[j]);
            j--;
        }
        else
        {
            i++;
        }
    }

    return nums;
}