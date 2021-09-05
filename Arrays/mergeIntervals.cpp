// Sorting
// Time  : O(nlogn)
// Space : O(1) (for solving),
//         O(n) (for storing resultant intervals)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isOverlapping(int low1, int high1, int low2, int high2)
    {
        return high1 >= low2;
    }

    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> Ans;

        int i = 0;
        int n = intervals.size();

        while (i < n)
        {

            int low = intervals[i][0];
            int high = intervals[i][1];

            int j = i + 1;

            while (j < n and isOverlapping(low, high, intervals[j][0], intervals[j][1]))
            {
                high = max(intervals[j][1], high);
                j++;
            }

            vector<int> CurrentInterval(2);
            CurrentInterval[0] = low;
            CurrentInterval[1] = high;
            Ans.push_back(CurrentInterval);

            i = j;
        }

        return Ans;
    }
};