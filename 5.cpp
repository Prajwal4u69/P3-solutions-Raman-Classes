#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i;

  cin>>n;
  int a[n];
  int a3,b,j;
  cin>>a3>>b;
  int b1[a3][b];

  for(i=0;i<a3;i++)
  {
    for(j=0;j<b;j++)
    {
      cin>>b1[i][j];
    }
  }
  for(i=0;i<a3;i++)
  {
    for(j=0;j<b;j++)
    {
    cout<<b1[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}
