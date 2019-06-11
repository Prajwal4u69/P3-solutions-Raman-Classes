#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int i;
  int num;

  cin>>n;
  int a[n];

  for(i=0;i<n;i++)
  {
    cin>>a[i];

  }
  int j;
  int f=0;
  for(i=0,j=n-1;i<j;i++,j--)
  {
    if(a[i]!=a[j])
    {
      f=1;
      cout<<"Not Palindrome";
    }
  }
  if(f==0)
  {
    cout<<"Palindrome";

  }
  return 0;
}
