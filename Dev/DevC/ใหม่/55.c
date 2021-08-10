#include<stdio.h>
int a(int A,int B,int C,int D,int E,int F)
{
    int Dot;
    
    Dot = (A*D)+(B*E)+(C*F);
    return Dot;
}
int main() 
{ int b;
    b=a(1,2,3,4,5,6)*5;
    
    return 0;
}