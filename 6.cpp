#include<bits/stdc++.h>
using namespace std;
#include<algorithm>

int main()
{
  int n,m;
  cin>>n>>m;

  int i,j,a[n][m];

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      cin>>a[i][j];
    }
  }
  int flag1=0,flag2=0,sum=INT_MIN;
  for(i=0;i<n;i++)

  {  flag1=0; flag2=0;
    for(j=0;j<m-1;j++)
    {
      if(a[i][j]==1 && a[i][j]!= a[i][j+1])
      {
        flag1=1;
      }
else
      if(a[i][j]==1 && a[i][j]== a[i][j+1]){
        flag2+=2;
      }
    }
//    cout<<"flag1"<<" "<<flag1<<endl;
//    cout<<"flag2"<<" "<<flag2<<endl;
    sum=max(flag1,sum);
    sum=max(flag2,sum);
  }
  cout<<sum;


  return 0;
}
