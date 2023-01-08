#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;

    int dp[n+10];
    dp[0] = 0;
    int x,y,z;
    for (int i = 1; i <= n; i++)
    {
        x = INT_MIN,y=INT_MIN,z= INT_MIN;

        if(i >= a){
            x = dp[i-a];
        }
        if(i >= b){
            y = dp[i-b];
        }
        if(i >= c){
            z =dp[i-c];
        }
        dp[i] = 1+max(z,max(x,y));
    }


    cout<<dp[n]<<endl;
    
    
    

    return 0;
}