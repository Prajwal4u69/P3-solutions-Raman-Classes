#include<bits/stdc++.h>
using namespace std;
#include<climits>
#include<algorithm>

int main()
{
  int n,m;
  cin>>n>>m;



  int i,j,a[n][m],max1=INT_MIN,f=0;;

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      cin>>a[i][j];
    }
  }

  for(i=0;i<n;i++)
  {
    max1=INT_MIN; f=0;
    for(j=1;j<=m-2;j++)
    {
       max1=max(max1,a[i][j]);

    }
  //   cout<<max1;
    for(j=1;j<=m-2;j++)
    {
      if(max1 != a[i][j] && max1>a[i][j]   && max1>a[i][n-1] && max1>a[i][0] )
      {
        f++;
      }

    }
       if(f==n-3)
       {
         cout<<max1<<endl;
       }
  }






  return 0;
}
