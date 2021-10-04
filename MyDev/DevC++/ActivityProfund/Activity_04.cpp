#include <iostream>
using namespace std;
void isPrime(int a)
{
    int b = 0;
    for (size_t i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            b++;
        }
    }    

    if (b == 1)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not Prime Number";
    }
}
int main()
{
    int a;
    cin >> a;
    isPrime(a);
    return 0;
}