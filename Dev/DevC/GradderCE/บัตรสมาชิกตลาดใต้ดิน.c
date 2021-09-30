#include <stdio.h>
#include <string.h>
void as(char a[15]);

int main()

{
    char id[15],name[15],cate[15];
    scanf("%s\n%[^\n]\n%s", id,name,cate);
    if((strlen(id)>14)||(strlen(name)>14)||(strlen(cate)>14))
    {
        return 0;
    }else
    {
    
    printf("++++++++++++++++++++++++++++++++++++++++\n");
    printf("+                                      +\n");
    printf("+             id: %s",id);
    as(id);
    printf("+           NAME: %s",name);
    as(name);
    printf("+       category: %s",cate);
    as(cate);
    printf("+                                      +\n");
    printf("++++++++++++++++++++++++++++++++++++++++");
    }
} 
void as(char a[15])
{
    for (size_t i = 1; i <(22-strlen(a)) ; i++)
    {
        printf(" ");
        
    }
    printf("+\n");
}