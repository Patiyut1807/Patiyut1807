#include <stdio.h>
int main()
{
    char a[100];

    scanf("%[^\n]", a);
    for (int i = 0; a[i] != 0; i++)
    {
        if ((a[i] >= ' ' && a[i] <= '/') || (a[i] >= ':' && a[i] <= 'z'))
        {
            if (a[i] == '-' && (a[i + 1] >= '0' && a[i + 1] <= '0'))
            {
                break;
            }

            printf("STRING !!!!!");
            return 0;
        }else
        {
            break;
        }
        
    }
    for (int i = 0; a[i] != 0; i++)
    {
        if ((a[i] >= '0' && a[i] <= '9'))
        {
            if (a[i + 1] == '.')
            {
                printf("FLOAT !!!!");
                return 0;
            }
        }
    }

    for (int i = 0; a[i] != 0; i++)
    {
        if ((a[i] >= '0' && a[i] <= '9'))
        {
            printf("INTEGER !!!");
            return 0;
        }
    }
}