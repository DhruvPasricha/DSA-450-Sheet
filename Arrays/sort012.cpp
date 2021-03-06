
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sort012(int arr[], int n)
    {

        int start = 0;
        int end = n - 1;
        int mid = 0;

        while (mid <= end)
        {

            switch (arr[mid])
            {
            case 0:
                swap(arr[mid++], arr[start++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[end--]);
                break;
            }
        }
    }
};

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}
