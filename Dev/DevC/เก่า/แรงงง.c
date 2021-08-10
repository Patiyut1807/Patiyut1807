#include<stdio.h>
int main() 
{
    float F,m,a;

    scanf("%lf %lf",&m,&a);
    if(m<0||a<0)
    {
    printf("Error");
    }else
    {   F=m*a;
        printf("Area = %lf x %lf = %lf",m,a,F);
    }
    return 0;
}