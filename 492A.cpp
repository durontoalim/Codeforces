#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t; cin>>t;

    int ans = 1, tmp = 2;
    int cube = 1;
    int sum = 1;
    while (sum <= t)
    {
        cube += tmp;
        sum += cube;
        tmp++;
        
        ans++;
    }
    cout<<ans-1<<endl;
    

    return 0;
}