#include<bits/stdc++.h>
using namespace std;
#include<math.h>

int main()
{
  int n;
  int i;
  int num;

  cin>>n;
  int a[n],b[n];

  for(i=0;i<n;i++)
  {
    cin>>a[i];

  }
  for(i=0;i<n;i++)
  {
    cin>>b[i];

  }
  int num1=0,num2=0;
  int k=0;
  for(i=n-1;i>=0;i--)
  {
    num1=num1+ pow(2,k)*a[i];
    k++;
  }
  k=0;
  for(i=n-1;i>=0;i--)
  {
    num2=num2+ pow(2,k)*b[i];
    k++;
  }
  cout<<num1-num2;
  return 0;
}
