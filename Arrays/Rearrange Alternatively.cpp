// Sort 01 + Two Pointer
// Time : O(n)
// Space : O(1)

#include <bits/stdc++.h>
using namespace std;

void rearrange(vector<int> &arr)
{

    int n = arr.size();

    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (arr[i] >= 0)
            swap(arr[i], arr[j--]);
        else
            i++;
    }

    i = 1;
    j = 0;

    while (j < n and arr[j] < 0)
        j++;

    while (j < n and i <= j)
    {

        if (arr[i] >= 0)
            i++;
        else
            swap(arr[i++], arr[j++]);

        i++;
    }
}
