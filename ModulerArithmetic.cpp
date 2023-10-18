#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int mod=1000000000+7;

ll fact(int n){
    ll ans=1;
    for(int i=2; i<=n; i++){
        ans=(ans*i)%mod;
    }
    return ans;
}

int main(){

      int n;cin>>n;
      cout<<fact(n)<<endl;

return 0;
}
