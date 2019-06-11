#include<bits/stdc++.h>
using namespace std;

int main()
{
  int k;

  cin>>k;
  long int a=2,b=2*k;

  int sum1=2, sum2=2*k;


  int i;
  int res=0;
      res=sum1+sum2;
//      cout<<res<<" ";
  for(i=1;i<k;i++)
  {

    cout<<sum1<<" "<<sum2<<" ";
    sum1=3*sum1;
    sum2=2*sum2;
  res+=sum1+sum2;
//  cout<<res<<" ";
  }

  cout<<endl<<res;
  return 0;
}
