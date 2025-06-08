#include <stdio.h>
#include <stdbool.h>  // Include this for bool, true, false
int main()
{
    int arr[5] = {5, 3, 2, 1, 9};
    int n = 5;
  
    for (int i = 0; i < n; i++){
        for(int j=0; j<n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i =0; i<n; i++){
        printf("%d ", arr[i]);
    }
   
  
}