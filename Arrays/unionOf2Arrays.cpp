#include <bits/stdc++.h>
using namespace std;

// Unordered_Set (Counting)
// Time : O(M + N)
// space : O(M + N)

class Solution
{
public:
    int doUnion(int a[], int n, int b[], int m)
    {
        unordered_set<int> s;

        for (int i = 0; i < n; i++)
            s.insert(a[i]);
        for (int i = 0; i < m; i++)
            s.insert(b[i]);

        return s.size();
    }
};

// Sorting +  2-Pointer(Counting + Printing)
// Time : O(MlogM + NlogN + M + N)
// space : O(1)

class Solution
{
public:
    int next(int a[], int n, int i)
    {

        int j = i;

        while (j < n and a[i] == a[j])
            j++;

        return j;
    }

    int doUnion(int a[], int n, int b[], int m)
    {

        sort(a, a + n);
        sort(b, b + m);

        int i = 0;
        int j = 0;

        int ans = 0;

        while (i < n and j < m)
        {

            if (a[i] < b[j])
            {
                i = next(a, n, i);
            }
            else if (a[i] > b[j])
            {
                j = next(b, m, j);
            }
            else
            {
                i = next(a, n, i);
                j = next(b, m, j);
            }
            ans++;
        }

        while (i < n)
        {
            i = next(a, n, i);
            ans++;
        }

        while (j < m)
        {
            j = next(b, m, j);
            ans++;
        }

        return ans;
    }
};
