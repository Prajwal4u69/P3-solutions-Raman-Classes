#include<bits/stdc++.h>
using namespace std;
#include<math.h>
int main()
{

int n;

  cin>> n;

   long int sum=0;
   int i,a=0;

   while(n!=0)
   {
     sum+= (n%10)*pow(2,a);
     a++;
     n/=10;
   }
   cout<<sum;
  return 0;
}
