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
  cin>>num;

  for(i=0;i<n;i++)
  {
    if(a[i]==num){
      cout<<i;
      break;
    }
  }
  return 0;
}
