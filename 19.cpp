#include<bits/stdc++.h>
using namespace std;
#include<math.h>

int main()
{
  int n;
  int i;


  cin>>n;
  int a[n];

  for(i=0;i<n;i++)
  {
    cin>>a[i];

  }
int max=a[0];
int tempmax=a[1];
if(max<a[1])
{
  max=a[1];
  tempmax=a[0];
}

for(i=2;i<n;i++)
{
  if(max<a[i])
  {
    tempmax=max;
    max=a[i];

  }
}
for(i=0;i<n;i++)
{
  if(tempmax==a[i])
  {
    a[i]=a[i+1];
    a[i+1]=-1;

  }
}
for(i=0;i<n;i++)
{

  if(a[i]!=a[i+1] && a[i] != -1)
  {
    cout<<a[i]<<" ";

  }
}

  return 0;
}
