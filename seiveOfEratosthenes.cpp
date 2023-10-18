//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int n)
    {
        bool check[n+2];
        memset(check,true,sizeof(check));
        vector<int>ans;

        for(int i=2; i*i<=n; i++)
        {
            if(check[i]){
                for(int j=i*i; j<=n; j+=i){
                    check[j]=false;
                }
            }

        }
        for(int i=2; i<=n; i++){
            if(check[i])ans.push_back(i);
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes)
        {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
