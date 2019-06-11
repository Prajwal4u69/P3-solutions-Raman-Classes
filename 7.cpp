#include<bits/stdc++.h>
using namespace std;
#include<math.h>
int main()
{

int a,b;

cin>>a>>b;

int i;
int limit=sqrt(a);
int flag1=0,flag2=0;
for(i=2;i<=limit;i++)
{
  if(a%i==0)
  {
    flag1=1;
    break;
  }
}
limit=sqrt(b);

for(i=2;i<=limit;i++)
{
  if(b%i==0)
  {
    flag2=1;
    break;
  }

}

if(flag1==0 && flag2==0)
{
  if(abs(a-b)==2)
  {
  cout<<"yes";
  }
}
else
{
  cout<<"no";
}

  return 0;
}
