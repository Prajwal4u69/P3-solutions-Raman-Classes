#include<bits/stdc++.h>
using namespace std;
#include<math.h>
int main()
{

int n,a;

cin>>n;
cin>>a;

int i;
long int max;
max=a;
if(n>1){
for(i=1;i<=n-1;i++)
{
  cin>>a;
  if(a<0 || a==0)
  {

  return 1;
  }
  if(a>=max)
  {
    max=a;
  }

}
}

cout<<max;

  return 0;
}
