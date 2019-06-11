#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;

  cin>>n;
  int i,j;

  int c=0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    { c++;
      if(i%2==0 && j%2!=0)
      {
      cout<<-c;
    }
      if(i%2!=0 && j%2==0)
    {
        cout<<-c;
    }
    if(i%2==0 && j%2==0)
  {
      cout<<c;
  }
  if(i%2!=0 && j%2!=0)
{
    cout<<c;
}
    }
    cout<<endl;
  }
return 0;

}
