#include<bits/stdc++.h>
using namespace std;

int main()
{


  int n;
  cin>>n;
  int i;
  int a[n],b[n];
  for(i=0;i<n;i++)
  {
  cin>>a[i];
}
for(i=0;i<n;i++)
{
cin>>b[i];

}
int c[n];
for(i=0;i<n;i++)
{
c[i]=a[i]^b[i];
cout<<c[i];
}



  return 0;
}
