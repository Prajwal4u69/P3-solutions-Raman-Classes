#include<bits/stdc++.h>
using namespace std;
#include<math.h>

  int gcd(int a,int b)
  {
  if(b==0)
  return a;
  return gcd(b,a%b);
  }

int main()
{

int a,b;

cin>>a>>b;

if( gcd(a,b) ==1)
{
  cout<<"coprime";

}else
{
  cout<<"no coprime";
}



  return 0;
}
