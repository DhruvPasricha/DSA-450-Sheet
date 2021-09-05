// Hashmap
// Time : O(n)
// Space : O(n)

#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m)
{

    string yes = "Yes";
    string no = "No";

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
        mp[a1[i]]++;

    for (int i = 0; i < m; i++)
        if (mp.count(a2[i]))
            continue;
        else
            return no;
    return yes;
}