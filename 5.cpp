#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;

   cin>>n;

   int i,a[n];

   for(i=0;i<n;i++)
   {
     cin>>a[i];
   }

   sort(a,a+n);

   int temp;
   int f=0;
   for(i=0;i<n;i=i+2)
   {
     if(i==n-1)
     {
       break;
     }
     temp=a[i];
     a[i]=a[i+1];
     a[i+1]=temp;

   }

   for(i=0;i<n;i++)
   {
     cout<<a[i]<<" ";
   }



  return 0;
}
