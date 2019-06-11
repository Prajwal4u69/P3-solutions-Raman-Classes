#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int i,a[n];

  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int max=a[n-1];
  cout<<max;
  for(i=n-2;i>=0;i--)
  {
    if(max<a[i])
    {
      max=a[i];
      cout<<max;
    }
  }
  return 0;
}
