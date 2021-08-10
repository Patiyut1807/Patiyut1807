#include<stdio.h>
#include<math.h>

int main() 
{
double x,y,z,a;
int n;
scanf("%lf %lf %d", &x, &y, &n);
if(n<=0){
printf("ERROR");
}else{
n-=1;
z=y/x;
a=x*pow(z,n);
printf("%.6lf",a);}
return 0;
}