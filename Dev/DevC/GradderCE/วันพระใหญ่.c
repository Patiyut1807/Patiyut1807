#include <stdio.h>

int main()
{
    int a,n;
    char d;
    scanf("%d %d %c", &n, &a, &d);
    if ((n<1||n>12)||(a<1||a>15)||(d!='w'&& d!='W'))
    {
        printf("Error");
    }
    else if(a==15)
    {
        
        printf("Wan Pra Yai");
    }else
    {
        printf("Normal Day");
    }
    

    return 0;
}