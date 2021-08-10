#include<stdio.h>
int main() 
{
    int m,n,b,v=1,i=0;
    scanf("%d %d",&m,&n);
    b=m+n;
      while (i==0)
      {   
        if (b>1)
        {
            b=b/10;
            v++;
        }else{
        break;}
      }
      
    printf("%d",v);
    return 0;
}