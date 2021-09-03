// Three Pointer
// Time : O(n1 + n2 + n3)
// Space : O(n1 + n2 + n3)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        int i = 0;
        int j = 0;
        int k = 0;

        vector<int> Ans;

        while (i < n1 and j < n2 and k < n3)
        {

            int m = min(A[i], min(B[j], C[k]));

            if (m == A[i] and m == B[j] and m == C[k])
            {
                Ans.push_back(m);
                while (i < n1 and A[i] == m)
                    i++;
                while (j < n2 and B[j] == m)
                    j++;
                while (k < n3 and C[k] == m)
                    k++;
            }
            else if (m == A[i])
            {
                i++;
            }
            else if (m == B[j])
            {
                j++;
            }
            else
            {
                k++;
            }
        }

        return Ans;
    }
};