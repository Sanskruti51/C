#include<stdio.h>
void power()
{
    int a, b, c, i;
    printf("enter the base and exponential value \n");
    scanf("%d%d", &a, &b);
    while(i<=b)
    {
        
        c=a*a;
        i++;
    }
    printf("the value %d raise to %d is %d", a,b,c);

}
int main()
{
    power();
}