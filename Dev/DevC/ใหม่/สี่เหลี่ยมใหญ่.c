#include <stdio.h>

int main()
{
    long int a,n;
    scanf("%ld %ld", &n, &a);
    if (n < 0 || a <=0)
    {
        printf("Error");
    }
    else
    {
        
        printf("%d",n*(a*a));
    }

    return 0;
}