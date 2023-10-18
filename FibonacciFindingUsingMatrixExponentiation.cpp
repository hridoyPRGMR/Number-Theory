#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll mod=1e9+7;
ll I[2][2];
ll in[2][2];

void mul(ll a[][2],ll b[][2]){

    ll res[3][3];
    for(ll i=0; i<2; i++){
        for(ll j=0; j<2; j++){
            res[i][j]=0;
            for(ll k=0; k<2; k++){
                ll x=(a[i][k]*b[k][j])%mod;
                res[i][j]=(res[i][j]+x)%mod;
            }
        }
    }

    for(ll i=0; i<2; i++){
        for(ll j=0; j<2; j++){
            a[i][j]=res[i][j];
        }
    }

}

ll nthFibonacci(ll a,ll b,ll n){

    I[0][0]=I[1][1]=1;
    I[0][1]=I[1][0]=0;

    in[0][0]=0;
    in [0][1]=in[1][0]=in[1][1]=1;
    n--;

    while(n){
        if(n&1){
            mul(I,in);
            n--;
        }
        else{
            mul(in,in);
            n>>=1;
        }
    }

    ll ans=a*I[0][1]+b*I[1][1];
    return ans;
}

int main(){

    ll t;cin>>t;
    while(t--){
        ll a,b,n;cin>>a>>b>>n;
        cout<<nthFibonacci(a,b,n)<<endl;
    }

return 0;
}
