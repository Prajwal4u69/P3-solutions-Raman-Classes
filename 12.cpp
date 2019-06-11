#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int i,j,k=0;
  int a[n],b[n];

  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }

  for(i=0;i<n;i++)
  {
    cin>>b[i];
  }

  int c[n+n];
  i=0;
  j=0;
  k=0;
  while(i<n && j<n)
  {
    if(a[i]<b[j])
    {
      c[k++]=a[i++];
    }
    else {
      c[k++]=b[j++]; }
    }


  while(i<n)
  {
    c[k++]=a[i++];
  }

    while(j<n)
    {
      c[k++]=b[j++];
    }

    for(i=0;i<n+n;i++)
    {
      cout<<c[i]<<" ";
    }


  return 0;
}
