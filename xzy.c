// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

int main() {
//   code for dynamic array ;

int n;
printf("enter the size of array : ");
scanf("%d", &n);

int *arr = (int*)malloc(n*sizeof(int));

for(int i = 0;  i<n; i++){
    printf("\nenter the value at arr[%d] index : ",i);
    scanf("%d",&arr[i]);
}

printf("inserted values are : \n");
for(int i = 0; i<n; i++){
    printf("%d\n",arr[i]);
}

    return 0;
}
