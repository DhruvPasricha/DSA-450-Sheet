// Hashmap
// Time : O(n)
// Space : O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_map<int, int> mp;

        int pre = 0;
        for (int i = 0; i < n; i++)
        {
            pre += arr[i];
            if (mp.count(pre) or pre == 0)
                return true;
            mp[pre]++;
        }
        return false;
    }
};