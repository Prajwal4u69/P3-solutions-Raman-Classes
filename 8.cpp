#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int i,a[n],b[n];

  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
    int c=0;
  for(i=0;i<n;i++)
  {
    cin>>b[i];
    if(a[i]^b[i]==1)
    {
      c++;
    }
  }






cout<<c;


  return 0;
}
