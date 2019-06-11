#include<bits/stdc++.h>
using namespace std;
#include<math.h>

int main()
{
  int x,n;

  cin>>x>>n;

  int i;

long  int term;
long int sum;
  term=x;
  sum= term;
  for(i=2;i<=n;i++)
  {
    term= (term*x*x*(-1))/((2*i)-1)*((2*i)-2);
    sum+=term;
  }
int o;
o = sin((x));
cout<<endl;
cout<<o;
  return 0;
}
