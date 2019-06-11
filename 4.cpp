#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int i,a[n];

  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int a1,b;
  cin>>a1>>b;
  int c=0;
  for(i=0;i<n;i++)
  {
    if(a[i]>=a1 && a[i]<=b )
    {c++;
    }

  }
  cout<<c;

  return 0;
}
