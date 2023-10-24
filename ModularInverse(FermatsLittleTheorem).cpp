#include<bits/stdc++.h>
using namespace std;

int power(int base,int pow,int m){
    int res=1;
    while(pow){
        if(pow&1){
            res=(res*base)%m;
            pow--;
        }
        base=(base*base)%m;
        pow>>=1;
    }
    return res%m;
}

int main(){

    int a,b,m;cin>>a>>b>>m;
    /*
    Fermat’s little theorem
    (x^m-1)%m=1
    (x^m-2)=(x^-1)
    (b^-1)%m=(b^(m-2))%m
    */
    int x=power(b,m-2,m);
    int ans=(a*x)%m;
    cout<<answer<<endl;

return 0;
}
