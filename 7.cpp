#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;

  cin>>n;
int i,j,c1=0,space=n-2;

for(i=1;i<=n;i++)
{
  if(i==1){
  for(j=1;j<=n;j++)
  { c1++;
    cout<<c1;
  }}

  for(j=1;j<=space;j++)
  {
    cout<<" ";
  }
  space--;


  if(i>1 && i<n)
  {
    cout<<c1;
  }
  c1--;
  if(i==n)
  {
    for(j=1;j<=n;j++)
    {
      cout<<j;
    }
  }
  cout<<endl;
}

  return 0;
}
