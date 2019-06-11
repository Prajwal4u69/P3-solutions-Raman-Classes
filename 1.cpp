#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int i,j,a[n][n],b[n][n];

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  }

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      b[i][j]=a[j][i];
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
    cout<<b[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
