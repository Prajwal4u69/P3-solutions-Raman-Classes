#include<bits/stdc++.h>
using namespace std;
int i,temp;
int main()
{
  int n;

  cin>>n;
  int j,k;


  int c=0;
//  int c1=0;
  for(i=0;i<n;i++)
  {
  //  c1=0;
    for(j=0;j<=i;j++)
    {




        if(i%2==0)
        {
            c++;

        cout<<c;
        temp=c;
      }
      if(i%2!=0)
      {
              c++;
      }

    }

    if(i%2!=0){
    for(k=c;k>temp;k--)
    {
    cout<<k;
    }
  }
    cout<<endl;
  }
return 0;

}
