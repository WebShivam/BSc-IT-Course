//program to evaluate the series S=1+1/2+1/3+..+1/n;
#include<stdio.h>
int main(){
    float s=0;
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+1.0/i;
    }
    printf("S=%f",s);
    return 0;
}