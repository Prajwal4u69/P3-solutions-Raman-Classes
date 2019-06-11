#include<bits/stdc++.h>
using namespace std;
#include<climits>
int main()
{
  int n;
    cin>>n;

  int i,a[n];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int max=INT_MIN;

  for(i=1;i<n-1;i++)
  {
    if(a[i]>a[i-1] && a[i]>a[i+1])
    {
      if(a[i]>max){
        max=a[i];
      }
    }
  }
  cout<<max;
  return 0;
}
