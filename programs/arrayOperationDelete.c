#include <stdio.h>

int main()
{
    int arr[5] = {5, 3, 2, 1, 9};
    int n = 5;

    // 1) delete part -->for delete we need to shift each element left
    int pos = 2;

    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}