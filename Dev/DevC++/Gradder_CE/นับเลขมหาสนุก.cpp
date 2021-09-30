#include <iostream>
using namespace std;
int main()
{
    int b,e,s,a,c;
    cin>>b>>e>>s;
    a=b;
     if(s==0){cout<<"Go to hell"<<endl;return 0;}
    c=((e-b)/s);
    if(c<=0){cout<<"Go to hell"<<endl;return 0;}
    
    cout << b<<endl;
    for (int i =1; i <=c ; i++)
    {
        a+=s;
        cout << a<<endl;
        
    }
   if (((e-b)%s)!=0)
   {
       cout << e<<endl;
   }
   
    return 0;
}