#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,x,i;

cin>>n>>x;
int term=1,sum=0;

for(i=1;i<=n;i++)
{
  term= (term*x)/i;
  sum+=term;
}
sum+=1;
cout<<sum;


return 0;

}
