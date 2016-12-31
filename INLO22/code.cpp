#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,o,a,b,c,z;
        cin>>m>>n>>o;
        a=(m-2)*4;
        b=(n-2)*4;
        c=(o-2)*4;
        z=a+b+c;
        if(z<=0)
        cout<<"0"<<endl;
        else
        cout<<a+b+c<<endl;
    }
    return 0;
} 