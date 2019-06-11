#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main()
{
  int i,id,jd,n0=0,j,m,k;

int keypad[3][3],c[3][3]={0};
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cin>>keypad[i][j];
    }
  }
  int sum=0;

  int s;
  cin>>s;
  int seq[s];

  for(i=0;i<s;i++)
  {
    cin>>seq[i];
  }

  for(i=1;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(seq[0]==keypad[i][j])
      {
        n0=seq[0];
        id=i;
        jd=j;
        keypad[i][j]=0;
        c[i][j]=-1;
      }
    }
  }
  int flag=0;
  for(i=0;i<s;i++)
  {
    for(j=0;j<3;j++)
    {
      for(m=0;m<3;m++)
      {
          if(seq[0]==keypad[j][m])
          {
            if(j==1 && m==1)
            {
              c[0][0]=2;
              c[0][1]=2;
              c[0][2]=2;
              c[1][0]=2;
              c[1][2]=2;
              c[2][0]=2;
              c[2][1]=2;
              c[2][2]=2;
              flag=1;
              break;

            }
            if(j==0 && m==0 )
            {
              c[0][1]=2;
              c[1][0]=2;
              c[1][1]=2;
              flag=1;
              break;
            }
            if(j==0 && m==1 )
            {
              c[0][0]=2;
              c[0][2]=2;
              c[1][0]=2;
              c[1][1]=2;
              c[1][2]=2;
              flag=1;
              break;
            }
            if(j==0 && m==2 )
            {
              c[0][1]=2;
              c[1][1]=2;
              c[1][2]=2;
              flag=1;
              break;
            }
            if(j==1 && m==0 )
            {
              c[0][0]=2;
              c[0][1]=2;
              c[1][1]=2;
              c[2][0]=2;
              c[2][1]=2;
              flag=1;
              break;
            }

            if(j==1 && m==2)
            {
              c[0][2]=2;
              c[2][2]=2;
              c[0][1]=2;
              c[1][1]=2;
              c[2][1]=2;
              flag=1;
              break;
            }
            if(j==2 && m==0 )
            {
              c[1][0]=2;
              c[1][1]=2;
              c[2][0]=2;
              c[2][1]=2;
              flag=1;
              break;
            }
            if(j==2 && m==1)
            {
              c[2][0]=2;
              c[1][0]=2;
              c[1][1]=2;
              c[1][2]=2;
              c[2][2]=2;
              flag=1;
              break;
            }
            if(j==2 && m==2 )
            {
              c[1][2]=2;
              c[1][1]=2;
              c[2][1]=2;
              flag=1;
              break;
            }

          }

      }
      if(flag==1)
      break;
    }
    if(flag==1)
    break;
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cout<<c[i][j]<<" ";
    }
    cout<<endl;
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(c[i][j]==0)
      {
        c[i][j]=4;
      }
    }
  }


  sum=0;

  for(i=1;i<s;i++)
  {
    for(j=0;j<3;j++)
    {
      for(k=0;k<3;k++)
      {
        if(seq[i]==keypad[j][k])
        {
          sum+=c[j][k];
        }
      }
    }
  }
  if(id==1 && jd==1)
  cout<<sum-2;
  else{
    cout<<sum;
  }



  return 0;
}
