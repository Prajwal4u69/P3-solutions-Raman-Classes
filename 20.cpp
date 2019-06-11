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
int k;
cin>>k;
for(i=0;i<n;i++)
{
  if(i!=k)
  cout<<a[i]<<" ";
}
  return 0;
}
