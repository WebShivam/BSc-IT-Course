//program to calculate the mean of test marks of 50 students
#include<stdio.h>
int main(){
    int i,n,sum=0,avg=0,arr[60];
    printf("Enter the total number of students: ");
    scanf("%d",&n);
    printf("Enter the test marks of students: ");
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("The total marks of students are: %d",sum);
    printf("\nThe average marks of students are: %d",avg);
    return 0;
}