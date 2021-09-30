#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if((a>='0'&&a<='9')||(a>='A'&&a<='Z')||(a>='a'&&a<='z'))
    {printf("%x%o",a,a);}
return 0;
}