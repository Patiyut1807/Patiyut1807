#include <stdio.h>
#include<math.h>
int main()
{
    double w,h,bmi;
    scanf("%lf\n%lf",&w,&h);
    bmi=w/pow((h*0.01),2);
    printf("%lf\n",bmi);
    if (bmi>=30)
    {
        printf("Obesity");
    }else if (25<=bmi)
    {
        printf("Overweight");
    }else if (18.5<=bmi)
    {
        printf("Normal");
    }else
    {
        printf("Underweight");
    }
    
    
    
    return 0;
}