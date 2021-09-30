#include<stdio.h>
#include<math.h>

double Newton_Raphson (double a,double b,double c,double Xp)
{ double delta ;
  do{ delta =(a*Xp*Xp + b*Xp +c)/(2*a*Xp +b);
  } while (fabs(delta)>0.00001);
  return delta;
}
int main(){
 double x,x1,x2,a,b,c ;
  char ch;
  do{
        printf("\nProgram estimate root of Equation ax^2+bx+c = 0 by Newton_Raphson\n");
        printf("Enter parameter a b c = ");
        scanf("%lf%lf%lf",&a,&b,&c);
        x = Newton_Raphson (a, b, c, 123.456);
        printf("answer x = %g\n",x);
        do { printf("Enter y to calculate again or n to exit.");
            scanf(" %c",&ch);
        } while(ch!='n'&&ch!='y');
    } while(ch=='y');

}
