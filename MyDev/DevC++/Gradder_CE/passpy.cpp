#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int x,y,z=0;
  cin>>x;
  cin>>y;
  for (int i = 1; i <=x; i++)
  {
      cout<<i<<' ';
      z++;
      if (z==y)
      {
         cout<<endl;
         z=0;
      }
      
  }
  
}