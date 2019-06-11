#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;

  cin>>n;
  int i,j;

  int c=0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    { if(!c){
      cout<<c;
      c=1;
     }
     else{
       cout<<c;
       c=0;
     }
    }
    cout<<endl;
  }
return 0;

}
