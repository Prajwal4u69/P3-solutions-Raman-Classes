#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  char ch[n];

  scanf("%s",ch);

  int i,c=0;

  for(i=0;i<=n;i++)
  {
    if(ch[i]>='0' && ch[i]<='9')
    {
      c++;
    //  cout<<"hello";
    }
  }
  cout<<c;

  return 0;
}
