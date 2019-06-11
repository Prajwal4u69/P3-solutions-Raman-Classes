#include<bits/stdc++.h>
using namespace std;
#include<climits>
#include<algorithm>

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

int max1=INT_MIN,sum=0,pos=0;

for(i=0;i<n;i++)
{
  max1=INT_MIN;
  for(j=0;j<m;j++)
  {
    max1=max(max1,a[i][j]);
  }
  cout<<max1<<" ";
}
cout<<endl;
for(j=0;j<m;j++)
{
  max1=INT_MIN;
  for(i=0;i<n;i++)
  {
    max1=max(max1,a[i][j]);
  }
  cout<<max1<<" ";
}

  return 0;
}
