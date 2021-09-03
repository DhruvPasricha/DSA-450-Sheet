
// Reverse Method
// Time  : O(N)
// Space : O(1)

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int s, int e)
{

    while (s <= e)
    {
        swap(&arr[s], &arr[e]);
        s++;
        e--;
    }
}

void rotate(int arr[], int n)
{

    reverse(arr, 0, n - 2);
    reverse(arr, 0, n - 1);
}

// Shifting
// Time : O(N)
// Space : O(1)

void rotate(int arr[], int n)
{
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i++)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
