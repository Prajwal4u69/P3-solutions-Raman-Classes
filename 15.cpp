#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int i;
  int num;

  cin>>n;
  int a[n];

  for(i=0;i<n;i++)
  {
    cin>>a[i];

  }
  int c[n],k=0;
  for(i=0;i<n;i++)
  {
  if(a[i]<0){
    c[k++]=a[i];
  }


  }
  for(i=0;i<n;i++)
  {
  if(a[i]>0){
    c[k++]=a[i];
  }


  }

  for(i=0;i<n;i++)
  {
  cout<<c[i]<<" ";

  }
  return 0;
}
