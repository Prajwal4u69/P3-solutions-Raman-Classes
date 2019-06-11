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

  int num1=0;
  int k=0;
  for(i=n-1;i>=0;i--)
  {
    num1=num1+ pow(2,k)*a[i];
    k++;
  }

  cout<<num1;
  return 0;
}
