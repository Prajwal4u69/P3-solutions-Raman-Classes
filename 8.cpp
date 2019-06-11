#include<bits/stdc++.h>
using namespace std;
#include<math.h>
int main()
{

int n,i,b,j;

cin>>n;
int limit=sqrt(n),a[100],k=0;
for(i=2;i<=n;i++)
{
  if(n%i==0)
  {

        a[k++]=i;

}
}

for(i=0;i<k;i++)
{
  for(j=2;j<=sqrt(a[i]);j++)
  {
    if(a[i]%j==0)
    {
      a[i]=0;
    }
  }
}
int flag=1;
for(i=0;i<k-1;i++)
{
  flag=1;
  for(j=i+1;j<k;j++)
  {
//    cout<<a[i]<<" "<<a[j]<<" ";
  if(a[i]*a[j]==n)
  {
    cout<<"Twin Prime";

    flag=0;
        break;
  }
  }
  if(flag==0)
  {
    flag=0;
    break;}

}
if(flag==1)
{
  cout<<"Not Twin Prime";
}






  return 0;
}
