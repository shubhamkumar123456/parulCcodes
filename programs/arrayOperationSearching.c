#include <stdio.h>
#include <stdbool.h>  // Include this for bool, true, false
int main()
{
    int arr[5] = {5, 3, 2, 1, 9};
    int n = 5, val=20;
    bool find =false;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]==val){
        find = true;
       }
    }
    if(find){
        printf("element find successfully");
    }
    else{
        printf("element not exists");
    }
}