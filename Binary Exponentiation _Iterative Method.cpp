#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int p=10;

int power(int x,int y){

    int res=1;
    x%=p;
    if(x==0)return 0;

    while(y){
        if(y&1){
            res=(res*x)%p;
        }
        x=(x*x)%p;
        y>>=1;
    }

    return res;
}

int main(){

    ll x=1378,y;cin>>n;
    print(x,y);

return 0;
}
