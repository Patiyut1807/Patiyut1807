#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int d, m, y, h;
    cin >> d >> m >> y;
    if (!(d >=1  && d <= 31) || !(m <= 12 && m >= 1) || !(y >= 1 && y <= 2021))
    {
        printf("ERROR");
        return 0;
    }
    if ( y % 4 == 0)
    {
        int Y1[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (d > Y1[m - 1])
        {
            printf("ERROR");
            return 0;
        }
        if(m==2){
            h = ((d + ((13 * (m + 1)) / 5) + y + (y / 4) - (y / 100) + (y / 400))+2) % 7;
        }else
        {
             h = ((d + ((13 * (m + 1)) / 5) + y + (y / 4) - (y / 100) + (y / 400))) % 7;
        }
        
       
    }

    else if ( y % 4 != 0)
    {
        int Y2[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (d > Y2[m - 1])
        {
            printf("ERROR");
            return 0;
        }
        if (m > 3)
        {
            m += 12;
            y -= 1;
        }
        h = (d + ((13 * (m - 1)) / 5) + y + (y / 4) - (y / 100) + (y / 400)) % 7;
    }
    else
    {
        cout << "ERROR" << endl;
    }
    
    switch (h)
    {
    case 0:
        printf("Saturday");
        break;
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    }
}