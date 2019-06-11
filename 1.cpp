#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;

  cin>>n;

  int i,j,space=0;

  for(i=0;i<n;i++)
  {
    for(j=0;j<=space;j++)
    {
      cout<<" ";
    }
    space++;
    for(j=0;j<n;j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }

  return 0;
}
