#include<stdio.h>

int main(){
    char name[]="";
    int n=0,i=0;
    scanf("%[^\n]",name);
    while(1)
    {
        if(name[i]!='\0')
        {
          n++;   
          ++i; 
        }else
        {
            break;
        }
      
    }
    printf("%d",n);
}