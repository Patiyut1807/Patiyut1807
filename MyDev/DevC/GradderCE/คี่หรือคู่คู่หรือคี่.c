#include<stdio.h>
int main() 
{
  int n[1000]={};
  int i=0,odd=0,even=0;
  do
  {
    
    scanf("%d",&n[i]);
    if (n[i] == 0)
    {
       break;
    }
    else
    {
        if ((n[i]%2)==0)
        {
            even += n[i];
        }else
        {
            odd += n[i];
        }  
    }
        i++;
  } while (1);
  printf("%d\n%d",odd,even);
  
  return 0;
}