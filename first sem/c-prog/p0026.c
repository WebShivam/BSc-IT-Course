//program to find the sum of all odd integer between 1 and N
#include<stdio.h>
int main(){
    int n,i,odd=0;
    printf("Enter N: ");
    scanf("%d", &n);
    //printf("");
    for(i=1;i<=n;i++){
        if(i%2!=0){
            odd=odd+i;
        }
    }
    printf("sum of all odd integer in the given range: %d",odd);
}