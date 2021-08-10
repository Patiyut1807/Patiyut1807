#include<stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    (a>100 ) ? printf("ERROR") : (a>=80) ? printf("A") : (a>=75) ? printf("B+") : (a>=70) ? printf("B") : (a>=65) ? printf("C+") :(a>=60) ? printf("C") : (a>=55) ? printf("D+") : (a>=50) ? printf("D") : (a>=0) ? printf("F") : printf("ERROR");
  
  return 0;
}