#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m,i,j,k,l;

  cin>>n>>m;
  int y;
  cin>>y;

  int a[n][m];

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      cin>>a[i][j];
    }
  }

  i=n-1; j=0; int c=0;

  while(i>=0 && j<=m)
  {
    k=i; l=0;

    c++;
    if(y==c){
    while(k<n)
    {


      cout<<a[k][l]<<" ";
      k++;
      l++;
    }}




    i--;
    j++;
  }
  i=0; j=1;

  while(i<n-1 && j<m)
  {
    k=0; l=j; c++;
    if(y==c){
    while(l<m)
    {
      cout<<a[k][l]<<" ";
      k++;
      l++;
    }}

    i++;
    j++;
  }


  return 0;
}
