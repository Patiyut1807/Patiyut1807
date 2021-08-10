#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();++i){
        if(s[i]>=74){
           printf("%c",s[i]+17-26);
           
        }else
        printf("%c",s[i]+17);
        
    }
    return 0;
}
