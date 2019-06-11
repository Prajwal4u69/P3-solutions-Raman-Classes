#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;

  cin>>n;
  int i,j;
int space,space2;
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
  space=n;   space2=n-1;
  for(i=0;i<n;i++)
  {

    for(j=0;j<=i;j++)
    {
      cout<<" ";
    }
    for(j=1;j<space;j++)
    {
      cout<<"*";
    }
    space--;

    for(j=1;j<space2;j++)
    {
      cout<<"*";
    }
    space2--;
    cout<<endl;
  }
return 0;

}
