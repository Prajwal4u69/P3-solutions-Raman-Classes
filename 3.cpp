#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int i,j,c=0;

  int space=0,s=n-1,z=n-1;
  int dc=0;
  for(i=n;i>=0;i--)
  {
    dc+=i;
  }
  dc = dc*2 - (n-1);
  for(i=0;i<n;i++)
  {
    for(j=0;j<space;j++)
    {
      cout<<" ";
    }
    space++;
    for(j=(z);j>=0;j--)
    {
      c++;
      cout<<c<<"*";
    }
z--;
    for(j=0;j<=s;j++)
    {
      if(j==n-1)
      {
        cout<<dc;
        dc++;
      }else{
        cout<<dc<<"*";
        dc++;
      }
    }
    dc=dc-(2*s)-1;
    s-=1;
    cout<<endl;
  }
  return 0;
  }
