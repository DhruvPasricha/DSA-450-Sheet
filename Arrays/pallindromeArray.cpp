

// Time : O(NlogN)
// Space : O(1)

#include <bits/stdc++.h>
using namespace std;

bool pallindrome(int n)
{

    int temp = n;
    int reverse = 0;
    while (temp != 0)
    {

        reverse = reverse * 10 + temp % 10;

        temp /= 10;
    }

    return reverse == n;
}

int PalinArray(int a[], int n)
{ //add code here.

    for (int i = 0; i < n; i++)
    {
        if (!pallindrome(a[i]))
        {
            return false;
        }
    }

    return true;
}