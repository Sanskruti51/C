#include<stdio.h>
int main(){
    float l,b,h, area;
    printf("Enter lenght, breadth and height of a rectangle: \n");
    scanf("%f%f%f", &l, &b, &h);
    area= l*b*h;
    printf("The area of the rectangle is: %f", area);


}