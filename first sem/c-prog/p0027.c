// program to generate first 50 positive integers which are divisible by 7
#include<stdio.h>
int main(){
    int i=1,n;
    printf("Enter N: ");
    scanf("%d",&n);
    while(i<=5){
        if(n%7==0)
            printf("%d\n",n);
            i++;
            n+=7;
    }
    return 0;
}
