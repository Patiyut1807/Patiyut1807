#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string a;
    int s = 0;
    getline(cin, a);

    for (int i = (a.size() - 1); i >= 0; i++)
    {
        if (a[i] == '4')
        {
            s = 2;
            break;
        }
        else if (a[i] == '8')
        {
            s = 1;
            break;
        }else
        {
            s=3;
        }
        
        //     {
        //         s = 2;
        //     }
        //     if (a[i] == '8')
        //     {
        //         if (s != 2 && s != 3)
        //         {
        //             s = 1;
        //         }
        //     }
        //     else if (a[i] == '4')
        //     {
        //         s = 2;
        //     }
        //     else if ((a[i] >= '0' && a[i] <= '9') && (a[i] != '8' && a[i] != '4'))
        //     {
        //         s = 3;
        //     }
    }
    switch (s)
    {

    case 1:
        cout << "YOU CAN PASS PYRAMID!!!" << endl;
        break;
    case 2:
        cout << "PHAROAH NEVER DIE" << endl;
        break;
    case 3:
        cout << "GET OUT!!!" << endl;
        break;
    case 0:
        cout << "GET OUT!!!" << endl;
        break;
    }

    return 0;
}