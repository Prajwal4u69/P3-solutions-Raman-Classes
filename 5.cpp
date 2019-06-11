#include<bits/stdc++.h>
using namespace std;
#include<climits>
int main()
{

  int max=INT_MIN;
  int n;
  cin>>n;
  int i;
  int a[n];
  for(i=0;i<n;i++)
  {
  cin>>a[i];

  
  if(a[i]>max)
  {
    max=a[i];
  }

  }

  cout<<max;
  return 0;
}
