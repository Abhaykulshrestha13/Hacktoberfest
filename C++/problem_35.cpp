#include <bits/stdc++.h>

using namespace std;
int rev (int c,int n)
{
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=c%10;
        c/=10;
    }
    int kx=0;
    int p=0;
    for(int i =n-1;i>0;i--)
    {
        kx+=arr[i]*pow(10,p);
        
        
        p++;
        
    }
    kx+=arr[0]*pow(10,p);
    //cout<<kx<<" ";
    return kx;
    
    
    
    
}
int main()
{
  int n;

  cin>>n;
    int nn=n;
    n*=10;
  int arr[n];
   unordered_map<int, int> map;
  for(int i=1;i<=n;i++)
  {
      arr[i]=i;
  }
   for(int i=2;i<=n;i++)
  {
      
      if(arr[i]!=1)
      {
           map.insert(make_pair(arr[i],1));
          for(int j=i+i;j<=n;j+=i)
          {
              arr[j]=1;
          }
      }
     
  }
 
   for(int i=1;i<=nn;i++)
  {
     if(arr[i]!=1)
     {
         int flag2=0;
         int c=arr[i];
         int k=0;
          while(c)
          {
              k++;
              c/=10;
          }
          
          int kk=k;
          c=arr[i];
          int cc=c;
          if(k>1)
          {int arr1[kk-1];
          int p=0;
          while(k>1)
          {
             c= rev(c,kk);
             arr1[p]=c;
             if (map.find(c) == map.end())
             {
                 flag2=1;
                 break;
             }
             p++;
             k--;
          }
          if(flag2==0)
          {
              cout<<cc<<" ";
          kk--;
          
          sort(arr1,arr1+kk);
          for(int i=0;i<kk-1;i++)
          {
              if(arr1[i]!=arr1[i+1])
              {
                  cout<<arr1[i]<<" ";
              }
          }
                     if(kk!=1)
                  cout<<arr1[kk-1]<<" ";
          }
            
        
          }
          else
          {
               cout<<cc<<" ";
          }
         
          
       }
        
  }
   return 0;
}
