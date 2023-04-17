#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main()
{
  
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        if( n%10 == 9){
            cout<<n/10 + 1<<endl;
        }
        else{
            cout<<n/10<<endl;
        }
    }
    

    return 0;
}