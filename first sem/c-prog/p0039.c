//program to read an array and print the array
#include<stdio.h>
int main(){
    int i,n,arr[50];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the values in array: ");
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The values in array are: ");
    for (i = 1; i <= n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}