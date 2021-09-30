#include <stdio.h>
void main()
{
    int a;
    scanf("%d", &a);
    if (a > 100 || a < 0)
    {
        printf("Error");
    }
    else
    {
        if (a >= 80)
        {
            printf("A");
        }
        else if (a >= 75)
        {
            printf("B+");
        }
        else if (a >= 70)
        {
            printf("B");
        }
        else if (a >= 65)
        {
            printf("C+");
        }
        else if (a >= 60)
        {
            printf("C");
        }
        else if (a >= 55)
        {
            printf("D+");
        }
        else if (a >= 50)
        {
            printf("D");
        }
        else
        {
            printf("F");
        }
    }
}