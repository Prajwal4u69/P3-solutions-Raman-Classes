
#include<bits/stdc++.h>
using namespace std;
#include<math.h>

int main()
{
int a,r,n;

cin>>a>>r>>n;

long int sn;

sn=(a*(1-pow(r,n)))/(1-r);

cout<<sn;



return 0;

}
