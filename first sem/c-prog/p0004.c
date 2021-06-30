// program to swap two numbers
#include<stdio.h>
int main(){
    int n1,n2,temp; //think like changing beverages
    // assign variables to 0 else it'll store garbage value
    printf("Enter the first number");
    scanf("%d",&n1);
    printf("Enter the second number");
    scanf("%d", &n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("Now the first number and the second number is %d and %d" ,n1,n2);
    return 0;
}