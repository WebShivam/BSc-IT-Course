//program to find the biggest of N numbers using array
#include<stdio.h>
int main(){
    int i,n,arr[50],big;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    big=arr[0];
    for(i=1;i<=n;i++){
        if(arr[i]>big){
            big=arr[i];
        }
    }
    printf("The biggest number in array is: %d",big);
    return 0;
}