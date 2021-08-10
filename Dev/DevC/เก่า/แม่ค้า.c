#include<stdio.h>
int main() 
{
    int a,b,c,d,i,j;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    i=(a*c)-(b*d);
    j=(a*d)+(b*c);
    printf("(%d)+(%d)i",i,j);
    return 0;
}