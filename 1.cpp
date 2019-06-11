#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int sum=0;
  int a[n];

  int i;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    sum^=i;
  }
  for(i=0;i<n;i++)
  {
    sum^=a[i];
  }
  cout<<sum-1;

  return 0;
}
