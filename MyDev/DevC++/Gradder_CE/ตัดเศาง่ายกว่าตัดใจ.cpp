#include <iostream>
using namespace std;

int main()
{
    double x;
    int y;
    scanf("%lf %d", &x, &y);
    if(y<=6&&y>=1)
    {
        
        switch(y)
        {
            case 1: printf("%.1lf",x);break;
            case 2: printf("%.2lf",x);break;
            case 3: printf("%.3lf",x);break;
            case 4: printf("%.4lf",x);break;
            case 5: printf("%.5lf",x);break;
            case 6: printf("%.6lf",x);break;
        }
    }
      
return 0;
}