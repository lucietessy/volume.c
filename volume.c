//program to find volume of acylinder
#include<stdio.h>
int main()
{
    double r,h,v;
    printf("enter r and h:");
    scanf("%lf %lf",&r,&h);
    //calculating volume
    v = 3.14 * r * r * h;
    //%.2lf displays number up to c decimal points
    printf("volume = %.2lf",v);
    return 0;
}