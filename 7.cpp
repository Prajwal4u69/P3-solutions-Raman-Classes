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
  int j;

int temp;
  for(i=0,j=n-1;i<j;i++,j--)
  {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
  }
  for(i=0;i<n;i++)
  {
    cout<<a[i];

  }
  return 0;
}
