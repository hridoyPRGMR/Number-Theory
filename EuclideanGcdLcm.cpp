#include<bits/stdc++.h>
using namespace std;

long long gcd(int a,int b){

    return b==0 ? a:gcd(b,a%b);

}

int main(){

    int t;
    cin>>t;

    while(t--){
        long long a,b;cin>>a>>b;
        cout<<gcd(a,b)<<" "<<(a*b)/gcd(a,b)<<endl;
    }


return 0;
}
