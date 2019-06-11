#include<bits/stdc++.h>
using namespace std;
#include<math.h>

int main()
{
    long int t;

    cin>>t;

    while(t--)
    {
        long int n,c=0,f=0,k=0,i,b[100];
        int a[23]={7,11,13,17,19,21,23,29,31,37,41,43,47,59,61,67,71,83,87,89,91,97};



        cin>>n;

        if(n==1){
            cout<<"0"<<endl;
        }else{




                while(n!=1)
                {

                    if(n%2==0)
                    {
                        n=n/2;  c++;
                    }
                    else{
                    if(n%3==0)

                    {
                        n=(2*n)/3 ; c++;
                    }
                    else{
                    if(n%5==0)
                    {
                        n=(4*n)/5; c++;
                    }
                        else{

                            break;
                        }
                    }

                    }


                }
                if(n%2!=0 && n%3!=0 && n%5!=0)
                {
                  cout<<"-1"<<endl;
                }
else{
                cout<<c<<endl; } }
             }



    return 0;
}
