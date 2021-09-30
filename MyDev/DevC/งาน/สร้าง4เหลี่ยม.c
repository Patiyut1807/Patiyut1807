#include <stdio.h>
int main(){
    //ส่วนรับข้อมูล
    int a;
    printf("Enter Number : ");
    scanf("%d",&a);
    //ส่วนแสดงผล
//+++++++++++++++++++++++++++++++++++++
    for (size_t i = 1; i <= a; i++)
    {
       printf("*");
    }
    printf("\n");
//+++++++++++++++++++++++++++++++++++++
    for (size_t j = 1; j <= a-2; j++)
    {
        printf("*");
        for (size_t k = 1; k <= a-2; k++)
        {
        printf(" ");
        }
        printf("*\n");
    }
//+++++++++++++++++++++++++++++++++++++
     for (size_t i = 1; i <= a; i++)
    {
       printf("*");
    }
    printf("\n");
    return 0;
}