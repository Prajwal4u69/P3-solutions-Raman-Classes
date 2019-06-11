#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i,j;

char ch[1000];
cin.getline(ch,1000);
int  l =strlen(ch);
int flag=0;


  for(i=0,j<l;i<j;i++,j--)
  {
    if(ch[i]!=ch[j])
    {
      cout<<"Not Palindrome";
      flag=1;
      break;
    }
  }
  if(!flag)
  cout<<"Palindrome";







  return 0;
}
