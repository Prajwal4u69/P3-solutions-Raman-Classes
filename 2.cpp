#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int i,j,a[n][n],sum=0;

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cin>>a[i][j];

      if(i==0)
      {
        sum+=a[i][j];
      }
    }
  }
  int dsum=0,ff=0;

  for(i=0;i<n;i++)
  {
    ff=0; dsum=0;
    for(j=0;j<n;j++)
    {
      dsum+=a[i][j];

    }
    if(sum!=dsum)
    {
      ff=1;
      break;
    }

  }

  for(j=0;j<n;j++)
  {
    ff=0;  dsum=0;
    for(i=0;i<n;i++)
    {
      dsum+=a[i][j];

    }

    if(sum!=dsum)
    {
      ff=1;
      break;
    }
  }
dsum=0; ff=0;
  for(i=0;i<n;i++)
  {

    for(j=0;j<n;j++)
    {
      if(i==j)
      dsum+=a[i][j];

    }


  }
  if(sum!=dsum)
  {
    ff=1;

  }
dsum=0;   ff=0;
  for(i=0;i<n;i++)
  {

    for(j=0;j<n;j++)
    {
      if(i+j==n-1)
      dsum+=a[i][j];

    }


  }
  if(sum!=dsum)
  {
    ff=1;
  
  }
  if(ff==1)
  {
    cout<<"Not Magic Matrix";

  }
  if(ff==0)
  {
    cout<<"Magic Matrix";

  }

  return 0;
}
