//Problem: https://code.google.com/codejam/contest/32015/dashboard#s=p1&a=1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 210
ll res, t, _t, i, l, dp[45][215][215][2][3];
string s;
ll go(ll i, ll sum, ll num, ll f, ll sign) {
    if(i == l) {
        if(num) sum = (sum + (sign-1)*num + MOD)%MOD;
        if(sum%2 == 0 || sum%3 == 0 || sum%5 == 0 || sum%7 == 0) {
            return 1;
        }
        return 0;
    }
    if(dp[i][sum][num][f][sign] != -1) return dp[i][sum][num][f][sign];
    ll ans = 0;
    ans += go(i+1, sum, (num*10+s[i]-'0'+MOD)%MOD, 0, sign);
    if(!f) {
        ans += go(i, (sum + (sign-1)*num + MOD)%MOD, 0, 1, 2);
        ans += go(i, (sum + (sign-1)*num + MOD)%MOD, 0, 1, 0);
    }
    return dp[i][sum][num][f][sign] = ans;
}
int main() {
    cin>>t;
    for(_t = 1; _t <= t; _t++) {
        cin>>s;
        res = 0;
        l = s.length();
        memset(dp, -1, sizeof dp);
        res = go(0, 0, 0, 1, 2);
        printf("Case #%lld: %lld\n", _t, res);
    }

    return 0;
}


