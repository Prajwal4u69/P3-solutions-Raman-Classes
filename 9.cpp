#include<bits/stdc++.h>
using namespace std;
#include<climits>

int main()
{
  int n;
  cin>>n;
  int i;
  float a[n],b[n];

  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    cin>>b[i];
  }
  int max=INT_MIN;
  float r;

  for(i=0;i<n;i++)
  {
    r=a[i]/b[i];
    if(max<r)
    {
      max=r;
    }
  }
  cout<<max*100;

  return 0;
}
