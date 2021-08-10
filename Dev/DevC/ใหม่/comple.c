#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    
  
        for (int i = 0; i < strlen(a); i++)
        {
            if (((a[i] != '0') && (a[i] != '1')) || (a[i] == '\0'))
            {
                return 0;
            }
            else if (a[i] == '0')
            {
                printf("1");
            }
            else if (a[i] == '1')
            {
                printf("0");
            }
        }
    
    return 0;
}
