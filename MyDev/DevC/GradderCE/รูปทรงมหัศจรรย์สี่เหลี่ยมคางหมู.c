#include <stdio.h>
int main()
{
    double a, b, c;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    if ((a < 0 && (b < 0 && c < 0))||b==c)
    {
        printf("Error");
    }
    else
    {
        
        printf("%lf",(0.5 * (b + c) * a));
    }
    return 0;
}