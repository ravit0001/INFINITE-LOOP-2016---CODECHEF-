#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
typedef long long int ll;
ll fact[1000];
int main()
{
    ll n,sol=0,t;
    scanf("%lld",&t);
    fact[1]=1;
    fact[0]=1;
    for(ll i=1;i<=500;i++)
        fact[i]=(fact[i-1]*i)%100000007;
    while(t--)
    {
        sol=0;
    scanf("%lld",&n);
 
    if(n-n%2<n-n%5)
    {
        ll i=2;
        while(i<=n)
        {
            for(int j=i;j<=n;j+=i)
            {
                sol=(sol+fact[j])%100000007;
            }
            i*=2;
        }
    }
    else
    {
        ll i=5;
        while(i<=n)
        {
            for(ll j=i;j<=n;j+=i)
            {
                sol=(sol+fact[j])%100000007;
            }
            i*=5;
        }
    }
 
    printf("%lld\n",sol);
}
return 0;
}  