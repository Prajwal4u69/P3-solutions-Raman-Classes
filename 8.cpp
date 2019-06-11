#include<bits/stdc++.h>
using namespace std;
#include<climits>

int main()
{
  char a[10000];

cin.getline(a,10000);
int l = strlen(a);

int max=INT_MIN;

int i,j,start,end,k,pos;

i=0;

while(i<l)
{
  if(a[i]>='0' && a[i]<='9')
  {
    k=0;
    pos=i;

    while(a[pos]>='0' && a[pos]<='9')
    {
      k++;
      pos++;

    }
  }
  if(k>0)
  {
    i=pos;
    if(max<k)
    {
      max=k;
      start=pos-k-1;
      end=pos-1;
    }
    k=0;
    continue;
  }

  i++;
}

 for(i=start+1;i<=end;i++)
 {
  cout<<a[i];
 }

  return 0;
}
