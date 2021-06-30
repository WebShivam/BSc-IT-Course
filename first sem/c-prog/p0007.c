//progran to find the biggest of two numbers
#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter the two numbers");
    scanf("%d%d",&n1, &n2);
    if(n1>n2)
        printf("%d is the bigger number",n1);
    else
        printf("%d is the bigger number", n2);
    return 0;
}