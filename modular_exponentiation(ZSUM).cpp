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

ll modexpo(ll a,ll b,ll n)
{
    ll d=1;
    while(b)
    {
        if(b%2)
        {
            d=(d*a)%n;
        }
        b>>=1;
        a=(a*a)%n;
    }
    return d;
}
int main()
{
ll i,j,l,n,m,t,T,f,p,ans,cnt,par,ele,a,b,c,d,k;
char x;
while(1)
{
    s(n);
    s(k);
    if(n==0 && k==0)
        break;
    b=modexpo(n,k,10000007);
    a=(2*modexpo(n-1,k,10000007))%10000007;
    d=modexpo(n,n,10000007);
    c=(2*modexpo(n-1,n-1,10000007))%10000007;
    p(((a+b)%10000007+(c+d)%10000007)%10000007);
}
return 0;
}



