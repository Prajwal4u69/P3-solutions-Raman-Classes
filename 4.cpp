#include<bits/stdc++.h>
using namespace std;
#include<climits>
#include<algorithm>

int main()
{
  int n;
  cin>>n;

  int i,j,a[n][n];

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  }

int max1=INT_MIN,sum=0,pos=0;
  for(j=0;j<n;j++)
  {
    sum=0;
    for(i=0;i<n;i++)
    {
      sum+=a[i][j];
    }
  //  max1=max(sum,max1);
    if(sum>max1)
    {
      pos=j+1;
      max1=sum;
    }

  }
  cout<<pos;
  return 0;
}
