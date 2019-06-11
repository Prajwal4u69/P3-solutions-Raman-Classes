#include<bits/stdc++.h>
using namespace std;
#include<string.h>

int main()
{

  char ch[1000];

  cin.getline(ch,1000);

  int i,c=1;

  for(i=0;i<strlen(ch);i++)
  {
    if(ch[i]==' ')
    {

          c++;
    }
  }
  cout<<c++;

  return 0;
}
