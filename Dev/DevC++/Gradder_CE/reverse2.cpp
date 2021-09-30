#include <iostream>
using namespace std;
int main()
{
    int y;
    cin >> y;
    if (y < 0)
    {
        cout << "ERROR" << endl;
    }
    else if (y % 4 == 0)
    {
        cout << "366" << endl;
    }
    else if (y % 4> 0)
    {
        cout << "365" << endl;
    }
    return 0;
}