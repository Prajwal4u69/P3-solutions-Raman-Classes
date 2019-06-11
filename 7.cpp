#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
#include<math.h>

int main()
{
  int n,m;
  cin>>n>>m;

  int i,j,a[n][m];

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      cin>>a[i][j];
    }
  }
  int binary=0,k=0,max1=INT_MIN,min1=INT_MAX,pos1,pos2;
  for(i=0;i<n;i++)
  {
    binary=0,k=0;
    for(j=m-1;j>=0;j--)
    {
     binary+=pow(2,k)*a[i][j];
     k++;
    }
    if(max1<binary)
    {
      max1=binary;
      pos1=i;
    }
    if(min1>binary)
    {
      min1=binary;
      pos2=i;
    }
  }

  cout<<pos2<<endl;
  cout<<pos1;




  return 0;
}
