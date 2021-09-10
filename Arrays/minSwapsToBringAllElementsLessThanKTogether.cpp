
// Sliding Window

// Time : O(N)
// Space : O(1)

#include <bits/stdc++.h>
using namespace std;

int minSwap(int *arr, int n, int k)
{

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
            count++;
    }
    int not_good = 0;

    for (int i = 0; i < count; i++)
    {
        if (arr[i] > k)
            not_good++;
    }

    int minSwaps = not_good;

    for (int i = count; i < n; i++)
    {

        int j = i - count;

        if (arr[j] > k)
            not_good--;

        if (arr[i] > k)
            not_good++;

        minSwaps = min(minSwaps, not_good);
    }

    return minSwaps;
}