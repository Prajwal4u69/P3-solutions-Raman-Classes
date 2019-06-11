
#include<bits/stdc++.h>
using namespace std;
#include<math.h>

int main()
{
int a,b,c,n;

cin>>n;
cin>>a>>b>>c;

int d=b-a;
long int sum=0,an,i;
for(i=1;i<=n;i++)
{
an=a+((i-1)*d);
sum+=an;
cout<<an<<" ";
}
cout<<endl<<sum;




return 0;

}
