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

for(i=0;i<n;i++)
{
  if(a[i]%2==0 && b[i]%2==0)
  {
    a[i]+=b[i];
  }
  if(a[i]%2!=0 && b[i]%2!=0)
  {
    a[i]*=b[i];
  }

}
for(i=0;i<n;i++)
{
  cout<<a[i]<<" ";
}

  return 0;
}
