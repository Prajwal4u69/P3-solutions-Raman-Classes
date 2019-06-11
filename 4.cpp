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
int f=0;

for(i=0;i<n;i++)
{
  if(a[i]==k)
  {
    f++;
  }
}
cout<<f;

  return 0;
}
