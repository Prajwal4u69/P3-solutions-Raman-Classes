#include<bits/stdc++.h>
using namespace std;
#include<math.h>

int main()
{
  int n;
  int i;


  cin>>n;
  int a[n];

  int num1=0;
  int k=0;

while(n!=0)
{
  a[k++]=n%2;
  n/=2;
}
int j,temp;

for(i=0,j=k-1;i<j;i++,j--)
{
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
}
for(i=0;i<k;i++)
{
  cout<<a[i]<<" ";
}
  return 0;
}
