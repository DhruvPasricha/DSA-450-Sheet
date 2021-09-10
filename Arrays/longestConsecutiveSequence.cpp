
// Hashmap

// Time : O(N)
// Space : O(N)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // arr[] : the input array
    // N : size of the array arr[]

    int solve(int x, unordered_map<int, int> &dest)
    {

        if (dest[x] != INT_MIN)
        {
            return dest[x];
        }

        if (dest.count(x + 1) == 0)
        {
            return dest[x] = x;
        }
        else
        {

            return dest[x] = solve(x + 1, dest);
        }
    }

    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        //Your code here

        unordered_map<int, int> destination;

        for (int i = 0; i < N; i++)
        {
            destination[arr[i]] = INT_MIN;
        }

        int ans = 0;
        for (int i = 0; i < N; i++)
        {
            destination[arr[i]] = solve(arr[i], destination);
            ans = max(ans, destination[arr[i]] - arr[i] + 1);
        }

        return ans;
    }
};