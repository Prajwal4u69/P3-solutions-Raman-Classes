#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i,j;

  cin>>n;
  int a[n],b[n];

  for(i=0;i<n;i++)
  {
    cin>>a[i];
    b[i]=a[i];
  }
sort(b,b+n);
int max= b[n-1];
int f[max+1]={0};

for(i=0;i<n;i++)
{
  f[a[i]]++;
}

for(i=0;i<n;i++)
{
  if(f[a[i]]==1 && f[a[i]]!=0)
  {
    f[a[i]]=0;
    cout<<a[i]<<endl;
  }
}

  return 0;
}
