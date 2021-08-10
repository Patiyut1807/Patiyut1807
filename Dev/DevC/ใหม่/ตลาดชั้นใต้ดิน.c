#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    for (size_t i = 0; i < strlen(a); i++)
    {
        if (a[i] == '.')
        {
            printf("FALSE");
            return 0;
        }
    }
    printf("TRUE");
    return 0;
}