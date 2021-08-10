#include <stdio.h>
int main()
{

    int a;
    printf("Input : ");
    scanf("%d", &a);
    for (size_t i = 1; i <= a; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            printf("*");
        }
    printf("\n");  
    }
    
    
    return 0;
}