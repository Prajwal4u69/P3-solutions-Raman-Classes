#include<bits/stdc++.h>
using namespace std;

int main()
{
  int i;
  int c1=0,c2=0;

  char s1='A'+c1,s2='Z'-c2;

cout<<s1<<s2<<" ";
c1+=2;
c2++;
for(i=2;i<=15;i++)
{


  s1=s1+c1;
  s2=s2-c2;
  cout<<s1<<s2<<" ";
}
return 0;

}
