#include <stdio.h>

int main()
{
    int arr[5] = {5, 3, 2, 1};
    int n = 5;
    
    // 1) insert part -->for insert we need to shift each element right
    int pos = 2, val = 8;
    
    for (int i = n-1; i >pos; i--)
    {
            arr[i] = arr[i - 1];
        }
        
        arr[pos] = val;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}