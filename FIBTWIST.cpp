#include <bits/stdc++.h>
#define MAX 1000000007
#define pb push_back
#define mp make_pair
#define FOR(n) for(i=0;i<n;i++)
#define rep(i,n) for(i=0;i<n;i++)
#define reps(i,a,b) for(i=a;i<=b;i++)
#define swap(a,b) T=a,a=b,b=T
#define ll long long int
#define que queue<int>
#define s(t) scanf("%lld",&t)
#define p(t) printf("%lld\n",t)
using namespace std;
ll base[2][2]={{1, 1}, {1, 0}};
ll unit[2][2]={{1, 0}, {0, 1}},mod;
inline void mul(ll a[2][2],ll b[2][2])
{
    ll r[2][2];
    r[0][0]=((a[0][0]*b[0][0])%mod+(a[0][1]*b[1][0])%mod)%mod;
    r[0][1]=((a[0][0]*b[0][1])%mod+(a[0][1]*b[1][1])%mod)%mod;
    r[1][0]=((a[1][0]*b[0][0])%mod+(a[1][1]*b[1][0])%mod)%mod;
    r[1][1]=((a[1][0]*b[0][1])%mod+(a[1][1]*b[1][1])%mod)%mod;
    memcpy(a,r,sizeof r);
}
inline void pwr(ll r[2][2],ll n)
{
    ll b[2][2];
    memcpy(r,unit,sizeof unit);
    memcpy(b,base,sizeof base);
    while(n>0)
    {
        if(n&1) mul(r,b);
        n>>=1;
        mul(b,b);
    }
}
inline ll fibo(ll n)
{
    ll r[2][2];
    if(!n) return 0;
    pwr(r,n-1);
    return r[0][0];
}
int main()
{
ll i,j,l,n,m,t,T,f,p,ans,cnt,par,ele,a,b,sa,sb;
char x;
s(t);
while(t--)
{
    s(a);
    s(mod);
    ans=(2*(fibo(a+2)-1)-a)%mod;//be careful about mod here concept taken from zobayer
    if(ans<0)
        ans+=mod;
    p(ans%mod);
}

return 0;
}



