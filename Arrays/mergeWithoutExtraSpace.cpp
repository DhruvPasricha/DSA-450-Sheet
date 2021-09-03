
// Heap Sort
// Time : O((N1 + N2)*log(N1 + N2))
// Space : O(1)


// Treating arr1 and arr2 as a single array and applying Heap Sort 

#include <bits/stdc++.h>
using namespace std;

#define p(x) ((x - 1) / 2)

class Solution
{
public:
    int *arr(int arr1[], int arr2[], int n1, int n2, int i)
    {

        if (i < n1)
            return &arr1[i];

        i -= n1;

        return &arr2[i];
    }

    int Swap(int *ptr1, int *ptr2)
    {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }

    void Insert(int arr1[], int arr2[], int n1, int n2, int i)
    {

        int *current = arr(arr1, arr2, n1, n2, i);

        while (p(i) >= 0)
        {

            int *parent = arr(arr1, arr2, n1, n2, p(i));

            if (*parent < *current)
            {
                Swap(parent, current);
            }
            else
            {
                break;
            }

            i = p(i);
            current = parent;
        }
    }

    void Remove(int arr1[], int arr2[], int n1, int n2, int size)
    {

        int *last = arr(arr1, arr2, n1, n2, size - 1);

        Swap(&arr1[0], last);
        size--;

        int i = 0;

        while (2 * i + 1 < size)
        {

            int *maxChild = arr(arr1, arr2, n1, n2, 2 * i + 1);
            bool left = true;

            if (2 * i + 2 < size)
            {
                int *rightChild = arr(arr1, arr2, n1, n2, 2 * i + 2);
                if (*rightChild > *maxChild)
                {
                    maxChild = rightChild;
                    left = false;
                }
            }

            int *current = arr(arr1, arr2, n1, n2, i);

            if (*maxChild > *current)
            {

                Swap(maxChild, current);
                i = ((2 * i) + 1) + (!left);
            }
            else
            {

                break;
            }
        }
    }

    void merge(int arr1[], int arr2[], int n, int m)
    {

        for (int i = 0; i < n + m; i++)
        {
            Insert(arr1, arr2, n, m, i);
        }

        for (int j = n + m; j >= 1; j--)
        {
            Remove(arr1, arr2, n, m, j);
        }
    }
};
