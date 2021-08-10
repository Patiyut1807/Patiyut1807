#include<stdio.h>
int main() 
{
double x,y,z,a;
int n;
scanf("%lf %lf %d", &x, &y, &n);
n-=1;
z=y-x;
a=x+(z*n);
printf("%.6lf",a);
return 0;
}