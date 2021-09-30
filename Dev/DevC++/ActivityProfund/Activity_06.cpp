#include <iostream>
using namespace std;


void swap(int &a, int &b)
{
    int i = a;
    a = b;
    b = i;
}

int main()
{
    int A, B;
    cout << "input : "<<endl;
    cin >> A>> B;
    swap(A, B);
    cout <<"output : "<<endl<< A <<' '<< B;
         
}
