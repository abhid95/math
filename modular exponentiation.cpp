int mod=1000000007;
long long me(long long base,long long e)
{
    long long ans=1;
    while(e)
    {
        if(e%2==1)
        {
            ans=(ans%mod*base%mod)%mod;
            ans%=mod;
        }
        base=(base%mod*base%mod)%mod;
        base%=mod;
        e/=2;
    }
    return ans;
}
