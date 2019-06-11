#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;

  cin>>n;
int i,j,c1=1,space=-1,dspace=n-2;

for(i=1;i<=n;i++)
{
  for(j=i;j<=i;j++)
  {
    cout<<j;
  }

  for(j=1;j<=space;j++)
  {
    cout<<" ";
  }
  space++;

  if(i>1 && i!=n){
  for(j=i;j<=i;j++)
  {
    c1++;
    cout<<c1;
  }
}

if(i<n-1){
for(j=1;j<=dspace;j++)
{
  cout<<" ";
}}
dspace--;

for(j=i;j<=i;j++)
{
  cout<<j;
}

  cout<<endl;
}

  return 0;
}
