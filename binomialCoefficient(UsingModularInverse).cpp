#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

ll factorial(ll num){
    ll res=1;
    for(ll i=2; i<=num; i++)
        res=(res*i)%mod;
    return res%mod;
}

ll power(ll base,ll pow){
    ll res=1;
    base=base%mod;

    while(pow){
        if(pow&1){
            res=(res*base)%mod;
            pow--;
        }
        base=(base*base)%mod;
        pow>>=1;
    }
    return res%mod;
}

ll nCr(ll n1,ll r1,ll k){

    ll ans= n1 * (power(r1,mod-2))%mod * (power(k,mod-2))%mod;

    return ans;

}

int main(){

    ll n,r;cin>>n>>r;
    ll n1=factorial(n),r1=factorial(r),k=factorial(n-r);
    ll ans=nCr(n1,r1,k);

    cout<<ans<<endl;

return 0;
}
