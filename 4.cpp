#include<bits/stdc++.h>
using namespace std;
#include<string.h>

int main()
{

  char ch[1000];

scanf("%s",ch);

  int i,freq[26]={0},pos=0;

  for(i=0;i<=strlen(ch);i++)
  {

    freq[ch[i]-97]++;
  }
int   max=freq[0];
  for(i=0;i<26;i++)
  {
    if(max<freq[i])
    {
      max=freq[i];
      pos=i;
    }


  }
  char p=pos+97;
  cout<<ch[pos+97];

  return 0;
}
