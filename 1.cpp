#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i;

  cin>>n;
  int a[n];
  int k;
  cin>>k;

  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);

  int j;
  i=0;
  j=n-1;
int flag=1;
  while(i<n && j>=0)
  {
    if(a[i]+a[j]<k)
    {
      i++;
    }
    if(a[i]+a[j]>k)
    {
      j--;
    }
    if(a[i]+a[j]==k)
    {
      cout<<"Yes";
      i++;
      j--;
      flag=0;
      break;
    }
  }
  if(flag)
  cout<<"No";
  return 0;
}
