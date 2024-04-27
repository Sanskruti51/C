#include<stdio.h>
#define pi 3.14
#include<math.h>
int main(){
    int r;
    float area;
    printf("Enter raidius of a circle: \n");
    scanf("%d", &r);
    area= pi*pow(r,2);
    printf("Area of Circle: %f", area);

}