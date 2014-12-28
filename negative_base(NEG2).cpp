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

string func(ll n)
{
    ll rem;
    string s;
    while(n)
    {
        rem=n%-2;
        n=n/-2;
        if(rem<0)
        {
            n++;
            rem+=2;
        }
        s.pb(rem+'0');
    }
    if(!s.size()) s.pb('0');
    else reverse(s.begin(),s.end());
    return s;
}
int main()
{
ll i,j,l,n,m,t,T,f,p,ans,cnt,par,ele;
char x;
s(n);
cout<<func(n)<<endl;
return 0;
}



