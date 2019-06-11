#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n ;
  cin>>n;
  int i,a[n];
  float sum=0;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
    sum+=a[i];
  }
  sum=sum/2;
  for(i=0;i<n;i++)
  {
  if(sum<a[i])
  {
    cout<<a[i]<<" ";
  }
  }


  return 0;
}
