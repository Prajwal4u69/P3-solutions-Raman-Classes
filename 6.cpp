#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i,j;

  cin>>n;
  int b1[n][n];

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cin>>b1[i][j];
    }
  }

  int g[100],f[100],k=0,l=0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(b1[i][j]%2==0)
      {
        g[k++]=b1[i][j];
      }else
        f[l++]=b1[i][j];
    }

  }
  for(i=0;i<k;i++)
  {
    cout<<g[i]<<" ";
  }
  cout<<endl;
  for(i=0;i<l;i++)
  {
    cout<<f[i]<<" ";
  }

  return 0;
}
