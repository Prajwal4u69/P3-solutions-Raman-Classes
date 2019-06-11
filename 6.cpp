#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i,j,space;
  int c1=0,c2;

  cin>>n;
space=n-2;
  c2=n;
  for(i=1;i<=n;i++)
  {
    for(j=i;j<=i;j++)
    {
      c1++;
      cout<<c1;
    }
    for(j=1;j<=space;j++)
    {
      if(i!=n){
      cout<<" "; }
    }
    if(i==n)
    {
  for(j=c1-1;j>1;j--)
  {
    cout<<j;
  }
    }
    for(j=c2;j<=c2;j++)
    {
      cout<<c2;

    }

      c2--;
    cout<<endl;

  }
c1=n-1;
c2=2;

  for(i=n-1;i>=1;i--)
  {
    for(j=i;j<=i;j++)
    {

      cout<<c1;
      c1--;
    }
    for(j=1;j<=space;j++)
    {

      cout<<" ";
    }

    for(j=c2;j<=c2;j++)
    {
      cout<<c2;

    }

      c2++;
    cout<<endl;

  }



  return 0;
}
