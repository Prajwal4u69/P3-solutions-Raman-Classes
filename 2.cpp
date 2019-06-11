#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

int d;
cin>>d;
d-=1;
int i,j,temp;
for(i=0;i<n;i++)
{
  cin>>a[i];
}
int rotate=d%n;
for(i=0,j=rotate;i<j;i++,j--)
{
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

cout<<endl;
for(i=rotate+1,j=n-1;i<j;i++,j--)
{
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
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
