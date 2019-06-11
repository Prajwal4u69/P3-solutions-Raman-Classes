#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int i,j,c1=n,c2=n-1,c3=n-1,c4=n,c9=2,c10=n-2;

  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      cout<<c1;
    }
    c1--;

    for(j=c2;j>=1;j--)
    {
      cout<<j;
    }
    c2--;
    for(j=2;j<=c3;j++)
    {
      cout<<j;
    }
    c3--;
    for(j=1;j<=i;j++)
    {
      if(i!=n)
      cout<<c4;
    }
    if(i==n)
    {
      for(j=1;j<=i-1;j++)
      {

        cout<<1;
      }
    }
    c4--;
    cout<<endl;
  }
  c1=2,c2=n-1;
  for(i=1;i<=n-1;i++)
  {
    for(j=1;j<=c2;j++)
    {
      cout<<c1;
    }
    c1++; c2--;

    for(j=i;j>=1;j--)
    {
      cout<<j;
    }

    for(j=2;j<=i+1;j++)
    {

      cout<<j;
    }
    for(j=c10;j>=1;j--)
    {
      cout<<c9;
    }
    c9++;
    c10--;


    cout<<endl;
  }

  return 0;
}
