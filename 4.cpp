#include<bits/stdc++.h>
using namespace std;
#include<climits>
int main()
{
  int n;
  cin>>n;

  int localmax=0;
  int globalmax=INT_MIN;

  int i,a[n];

  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }

  for(i=0;i<n;i++)
  {
    localmax+=a[i];
    if(globalmax<localmax)
    {
      globalmax=localmax;
    }
    if(localmax<0)
    {
      localmax=0;
    }
  }
  cout<<globalmax;

  return 0;
}
