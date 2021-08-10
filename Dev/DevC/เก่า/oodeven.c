#include <stdio.h>
int main()
{
    long int a;
    scanf("%ld",&a);
    a%=2;
    if (!(!(!(!(!a))))){
        printf("even");
    }else 
    {
        printf("odd");
    }
  
    return 0;
}