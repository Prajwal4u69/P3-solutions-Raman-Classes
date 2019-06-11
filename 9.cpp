#include<bits/stdc++.h>
using namespace std;
#include<math.h>
int main()
{
 int n;
 cin>>n;

 int i;
 for(i=1;i<=n;i++)
 {
   if(n%i==0)
   {
     cout<<i<<" ";
   }
 }

  return 0;
}
