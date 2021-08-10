#include <iostream>
using namespace std;

int main()
{
    int a, b,c;
    cin >> a;
    b = a / 2;
    c =a-b;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 != 0)
        {
            for(int j = 1; j <= c; j++)
            {
                cout << "*"<< " " ;
            }
            cout<<endl;     
        }else
        {
            for(int j = 1; j <= b; j++)
            {
                cout <<" "<<"*";
            }
            cout<<endl; 
        }
        
    }
    return 0;
}