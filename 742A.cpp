#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int binary_exponential(int a, int n, int mod){
    int result = 1;
    while(n){
        if(n%2 == 1){
            result = (result*a)%mod;
            n--;
        }
        else{
            a = (a*a)%mod;
            n /= 2;
        }
    }
    
    return result;
}
int32_t main()
{
    FastIO();
    int n; cin>>n;
    int result = binary_exponential(8,n,10);
    cout<<result<<endl;

    return 0;
}