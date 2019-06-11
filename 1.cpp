#include<bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  long int a,i,sum=0;
  cin>>n;

  while(n!=0)
  {
    a=n%10;
     for(i=a-1;i>=1;i--)
     {
       a*=i;
     }
     sum+=a;

     n=n/10;

  }
cout<<sum;
  return 0;
}
