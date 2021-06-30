//WACP to calculate the area of triangle,circle and square
#include<stdio.h>
int main(){
    int in;
    float base, ht, rad, side;
    printf(" Enter 1 for area of right triangle ");
    printf("\n Enter 2 for area of circle ");
    printf("\n Enter 3 for area of square \n");
    scanf("%d", &in);
    if (in==1){
        printf("Enter the height : ");
        scanf("%f",&ht);
        printf("Enter the base : ");
        scanf("%f", &base);
        printf("The area of triangle with given dimension = %f", 0.5*base*ht);
    }
    if (in == 2)
    {
        printf("Enter the radius of circle : ");
        scanf("%f", &rad);
        printf("The area of circle with given radius = %f", 3.14*rad*rad);
    }
    else if(in==3){
        printf("Enter the side of the square");
        scanf("%f",&side);
        printf("The area of square with side %f is %f",side,side*side);
    }
    return 0;
}