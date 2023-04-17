#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int n; cin>>n;
    int cnt = 0;
    for (int i = 1; i <= n/2; i++)
    {
        if(n%i == 0) cnt++;
    }

    cout<<cnt<<endl;
    

    return 0;
}