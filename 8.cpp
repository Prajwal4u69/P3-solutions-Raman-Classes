#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;

  cin>>n;
  int i,j;
int space;
space=n-1;
  for(i=0;i<n;i++)
  {

    for(j=0;j<space;j++)
    {
      cout<<" ";
    }
    space--;
    for(j=0;j<=i;j++)
    {
      cout<<"*";
    }
    for(j=1;j<=i;j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
return 0;

}
