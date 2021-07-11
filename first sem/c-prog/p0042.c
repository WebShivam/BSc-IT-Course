//program to read the given N number and find the sum of all positive and negative numbers separately and find overall sum
#include<stdio.h>
int main(){
    int arr[60], i, n, psum=0, nsum=0, sum=0;
    printf("Enter the size of the numbers: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=0){
            psum=psum+arr[i];
        }
        else{
            nsum=nsum+arr[i];
        }
    }
    sum=psum+nsum;
    printf("The sum of all positive numbers: %d",psum);
    printf("\nThe sum of all negative numbers: %d",nsum);
    printf("\nThe combine sum of both positive and negative numbers: %d",sum);
    return 0;
}