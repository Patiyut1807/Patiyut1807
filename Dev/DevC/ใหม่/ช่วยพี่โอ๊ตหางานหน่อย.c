#include <stdio.h>
int main()
{
    int a,b[100],c=0;
    
    scanf("%d", &a);
    for (size_t i = 0; i < a; i++)
    {
      scanf("%d", &b[i]);
      if((b[i]==1||(b[i]%2!=0)))
      {
          c++;
      }
    }
    printf("%d",c);
    
    
}