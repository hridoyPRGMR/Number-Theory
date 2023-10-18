#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){

    ll n,k;cin>>n>>k;
    set<ll>s;

    for(int i=1; i<=sqrt(n); i++){

        if(n%i==0){
            s.insert(i);
            s.insert(n/i);
        }
    }

    if(s.size()<k){
        cout<<-1<<endl;
        return 0;
    }
    ll cnt=0;
    for(auto it:s){
        cnt++;
        if(cnt==k){
            cout<<it<<endl;
            break;
        }
    }

return 0;
}

