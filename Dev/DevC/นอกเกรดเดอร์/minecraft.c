#include <stdio.h>
#include <assert.h>
int findHeighest (int heigh1,int heigh2);
void Drawing (int heigh);

int n ;
int mountain[50]={};
   

void main ()
{   
    int heighest = mountain[1]; 
    printf ("Enter Number of mountain : ");     
    scanf("%d",&n);
     printf("\n");
    if (n>=0)
        {
            for (int i = 1; i <= n; i++)
            {   
                printf("Enter Height Mountain[%d] : ",i);
                scanf("%d",&mountain[i]);
            }
        }else
        {
        printf("###Error###");
        }
    for (int i = 1; i <=n; i++)
    {
        heighest= findHeighest(heighest,mountain[i]);
    }
    for (int i = 1; i <= heighest; i++)
        {
        Drawing(heighest);
        printf("\n");
        
        }
    
}  
void Drawing (int heigh)
        {
    
        }
    

   /* for (int i = 1; i < heigh; i++)
        {
            printf("_");
        } 
    for (int i = 1; i <= n  ; i++)
        {
            int round= mountain[i]-(heigh-1);
            if(round>0)
            {
                for (int i = 1; i <= round; i++)
                {
                    printf("* ");
            
                }
            }else
            {
                for (int i = 1; i <= round; i++)
            {
                printf("__");
            
            }
            }
            
            
        }
    for (int i = 1; i < heigh; i++)
        {
            printf("_");
        }
    
   */
    

}
int findHeighest (int heigh1,int heigh2){
    if (heigh2>heigh1)
    {
        return heigh2;
    }else
    {
        return heigh1;
    }
    

}  
   
