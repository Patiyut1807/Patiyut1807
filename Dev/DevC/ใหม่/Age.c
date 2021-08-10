#include <stdio.h>
int main()
{
    int n, a[50];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if (n < 0)
    {
        printf("ERROR");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 2564)
        {
            printf("NULL\n");
        }else
        {
            printf("%d\n",2564-a[i]);
        }
        
    }

    return 0;
}