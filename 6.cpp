#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int i;
  int num;

  cin>>n;
  int a[n],b[n];

  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    cin>>b[i];
  }
  sort(a,a+n);
  sort(b,b+n);
int j,flag=0;
for(i=0;i<n;i++)
{ flag=0;
  for(j=0;j<n;j++)
  {
    if(a[i]==b[j])
    {
      flag=1;
      break;
    }

  }
  if(flag==0)
  {
    cout<<a[i];
  }

}


  return 0;
}
