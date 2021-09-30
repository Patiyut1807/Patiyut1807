#include<stdio.h>
int main() 
{
    int m,n;
    scanf("%d %d",&m,&n);
    if (m<0||n<0)
    {   
       printf("ERROR");
    }else{
    if(m==0){
    printf("%d",(m)*n);
    }else{
        printf("%d",(m-1)*n);}
    }
    
    return 0;
}