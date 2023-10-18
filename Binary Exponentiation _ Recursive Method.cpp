#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll power(ll base,ll n){

    if(n==0)return 1;

    ll res=power(base,n/2);
    if(n&1){
        return base*res*res;
    }
    else{
        return res*res;
    }

}

int main(){

    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        cout<<power(n,m)<<endl;
    }

return 0;
}

