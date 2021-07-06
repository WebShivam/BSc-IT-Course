//program to print the digits using word
#include <stdio.h>
int main(){
    int num,r,newnum=0;
    printf("Enter the number ");
    scanf("%d",&num);
    while(num>0){
        r=num%10;
        newnum=newnum*10 +r;
        num=num/10;
    }
    while(newnum>0){
        r= newnum%10;
        switch(r){
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
        newnum /= 10;
        }
    return 0;
}