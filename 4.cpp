#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;

  cin>>n;

  int i,j,c=0,c1=1;

  c=n;
  for(i=n;i<=2*n;i++)
  {
      for(j=1;j<=c1;j++)
      {
        cout<<c;


      }
        c++;
        c1++;
      cout<<endl;
  }
  c-=2;
  c1-=2;
  for(i=0;i<n;i++)
  {
      for(j=1;j<=c1;j++)
      {
        cout<<c;


      }
        c--;
        c1--;
      cout<<endl;
  }

  return 0;
}
