
#include<bits/stdc++.h>
using namespace std;
#include<climits>

int main()
{
  int n,i;

  cin>>n;
  int a[n];


  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
int  max= a[n-1];



  int f[max] = {0};

  for(i=0;i<n;i++)
  {
    f[a[i]]++;
  }
int m=INT_MIN,pos=0;

  for(i=0;i<n;i++)
  {
    if(m<f[a[i]])
    {
      m=f[i];
      pos=i;
    }
  }
  cout<<a[pos];

  return 0;
}
