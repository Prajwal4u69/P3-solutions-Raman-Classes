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

  int c=0;

  for(i=0;i<n;i++)
  {
    if(a[i]%2==0)
    {c++;}
  }

  for(i=0;i<n;i++)
  {
    if(i%2==0)
    {c--;
      a[i]=0;
    }
    else{
      a[i]=1;
    }
    if(c==0)
    {
      break;
    }
  }

  for(i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
