#include <iostream>
using namespace std;
int main(){
    char A[100],*ptr_A;
    int i=0;
    ptr_A = A;
    cin>>A;
    while(*(ptr_A+i) !='\0'){
        if (*(ptr_A+i)!= *(ptr_A+(i+1)))
        {
            cout<<*(ptr_A+i);
        }
        i++;
    }
}