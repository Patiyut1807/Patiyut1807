#include<stdio.h>
#include<math.h>
int main() 
{ double x1,y1,x2,y2,x,y,r;
scanf("%lf,%lf",&x1,&y1);
scanf("%lf,%lf",&x2,&y2);
x=pow(x1-x2,2);
y=pow(y1-y2,2);
r=sqrt(x+y);
printf("%lf",r);
    return 0;
}