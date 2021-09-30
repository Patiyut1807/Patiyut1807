#include <iostream>
using namespace std;

int main()
{
   string s;
   cin>>s;
   for(int i =0;i<s.length();i++) {
       if(i!=0){cout<<"/";}
       printf("%x%o%d",s[i],s[i],s[i]);

   }
      
return 0;
}