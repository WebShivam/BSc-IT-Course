//program to find the sum of integers using array
#include<stdio.h>
int main(){
    int x,i,n,sum=0,arr[50];
    printf("Enter the limit: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++){
        sum=sum+arr[i];
    }
    printf("Summation: %d",sum);
    return 0;
}