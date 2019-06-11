#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;

  cin>>n>>m;

  int i,j,space=0,space2=m-3;

  for(i=0;i<n;i++)
  {
    for(j=0;j<=space;j++)
    {
      cout<<" ";
    }
    space++;
    for(j=0;j<m;j++)
    {


    if((i==n-1 || i==0)&& j>=0)
  {
    cout<<"*";
  }
    if(i>0  && i<(n-1))
    {
    cout<<"*";
    break;
    }


    }
    for(j=1;j<=space2+1 && j<(m-1);j++)
    {
      cout<<" ";
    }
    if(i>0 && i < n-1 )
    {
    cout<<"*";

    }
    cout<<endl;
  }

  return 0;
}
