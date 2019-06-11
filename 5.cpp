#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;

  cin>>n;

long int a=1,b=1,ar[100],k=2;
int i;
ar[0]=1;
ar[1]=1;
for(i=2;i<=n;i++)
{
  a=a*2;
  b=b*3;
  ar[k++]=a;
  ar[k++]=b;
//  cout<<a<<" "<<b<<" ";
}
cout<<ar[n-1];


  return 0;
}
