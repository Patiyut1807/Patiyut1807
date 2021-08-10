#include <stdio.h>
#include <ctype.h>

int main()

{
    long int a;
    char b[50];
    scanf("%s", b);

        for (int i = 0; b[i] != 0; i++)
    {
        if (!(isdigit(b[i])))
        {
            printf("Error");
            return 0;
        }
        
    }

    sscanf(b, "%d", &a);
    for (int i = 1; i <= 12; i++)
    {
        printf("%d x %d = %d\n",a,i,a*i);
    }
    
        
    
    return 0;
}