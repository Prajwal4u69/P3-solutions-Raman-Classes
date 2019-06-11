#include<bits/stdc++.h>
using namespace std;

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
int  max=a[n-1];



  int f[max+1] = {0};

  for(i=0;i<n;i++)
  {
    f[a[i]]++;
  }

    for(i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
        cout<<a[i]<<":"<<f[a[i]]<<endl;
      }


  return 0;
}
