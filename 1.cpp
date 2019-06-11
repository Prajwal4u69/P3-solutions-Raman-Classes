#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  char ch[n];

  scanf("%s",ch);

  int i;

  for(i=0;i<n;i++)
  {
    if(ch[i]>=97 && ch[i]<=122)
    {
      ch[i]=ch[i]-32;
    }
  }
  cout<<ch;

  return 0;
}
