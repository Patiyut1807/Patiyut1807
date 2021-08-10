#include<stdio.h>
int main() 
{
    int a;
    scanf("%d", &a);
    for(int i=0;i <= 20;i++)
    { 
        int n=-10;
        printf("%d\n",a+(n+i));
        n++;

    }
    
    return 0;
}