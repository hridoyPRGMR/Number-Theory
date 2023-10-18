#include<bits/stdc++.h>
#define N 101
#define ll long long int
using namespace std;
ll arr[N][N];
ll I[N][N];

void mul(ll I[][N],ll arr[][N],ll n)
{

    ll res[n+1][n+1];

    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=n; j++)
        {
            res[i][j]=0;
            for(ll k=1; k<=n; k++)
            {
                res[i][j] += (I[i][k] * arr[k][j]);
            }
        }
    }

    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=n; j++){
            I[i][j]=res[i][j];
        }
    }

}


void power(ll arr[][N],ll n,ll p)
{

    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=n; j++)
        {
            if(i==j)I[i][j]=1;
            else I[i][j]=0;
        }
    }

    /*
    for(ll i=1; i<=p; i++)
    {
        mul(I,arr,n);
    }
    */

    while(p){
        if(p&1){
            mul(I,arr,n);
            p--;
        }
        else{
            mul(arr,arr,n);
            p=p/2;
        }
    }


    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=n; j++){
            arr[i][j]=I[i][j];
        }
    }

}

int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,p;
        cin>>n>>p;
        for(ll i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cin>>arr[i][j];
            }
        }

        power(arr,n,p);

        for(ll i=1; i<=n; i++){
            for(ll j=1; j<=n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
