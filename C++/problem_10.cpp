#include <iostream>

using namespace std;

int main()
{
  int n=10;
  cin>>n;
  int c=0;
  
  
  for(int i=2;i<=n;i++)
  {
      
     int flag=0;
      for(int j=2;j*j<=i;j++)
      {
     
          if((i%j)==0)
          {
              flag=1;
              break;
          }
          
      }
      if(flag==0)
      {
       // cout<<i<<" ";
          c+=i;
      }
      
  
   }
  cout<<c;
  
   return 0;
}
