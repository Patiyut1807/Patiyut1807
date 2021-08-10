#include <stdio.h>
#include <math.h>
int dis(double a, double b, double c);
int main()
{
    double a, b, c,x1,x2;
    

    scanf("%lf %lf %lf", &a, &b, &c);
    int d = dis(a, b, c);
    if (d < 0 || a==0)
    {
        printf("Error");
    }
    else if (d == 0)
    {
        x1 = -b/(2*a);
        printf("x = %.2lf",x1);
    }
    else
    {   x1=((-b + sqrt((b*b)-(4*a*c)))/(2*a));
        x2=((-b - sqrt((b*b)-(4*a*c)))/(2*a));
        if(x1<x2)
        {
            printf("x1 = %.2lf, x2 = %.2lf",x1,x2);
        }else
        {
            printf("x1 = %.2lf, x2 = %.2lf",x2,x1);
        }
        

       
    }

    return 0;
}
int dis(double a, double b, double c)
{
    int _dis = (b * b) - (4 * a * c);
    return _dis;
}
