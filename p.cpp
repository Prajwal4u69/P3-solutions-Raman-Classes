#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main() {




        int n,i,j,max1=0,tmax=0;


    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
        int flag=0,k;
    for(i=0;i<n-1;i++)
    {
        tmax=0; flag=0;
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(a[k]<a[j] && k+1 !=n)
            {
                tmax+=max(tmax,a[j]-a[i]);
                k++;
            }else{
                break;
            }
        }
        if(tmax>max1 && tmax>0)
        {
            cout<<"("<<i<<","<<j-1<<")"<<" ";
            max1=tmax;
        }else {
          if(tmax<=0)
          flag=1;

        }

    }
    if(flag==1)
    {
      cout<<"No Profit";
    }


    return 0;
}
