#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    // FastIO();
    int a,b,c,d; cin>>a>>b>>c>>d;
    
    map<int,int>mp;
    mp[2] = a;
    mp[3] = b;
    mp[5] = c;
    mp[6] = d;
    int sum = 0;
    while (1)
    {
        if(mp[2] > 0 && mp[5] > 0 && mp[6] > 0){
            sum += 256;
            mp[2]--;
            mp[5]--;
            mp[6]--;
        }
        else break;
    }

    while (1)
    {
        if(mp[2] > 0 && mp[3] > 0 ){
            sum += 32;
            mp[3]--;
            mp[2]--;
        }
        else break;
    }
    cout<<sum<<endl;

    return 0;
}