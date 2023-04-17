#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        map<int,int>mp;
        vector<int>v;
        
        for (int i = 0; i < n*2; i++)
        {
            int x; cin>>x;
            mp[x]++;
            if(mp[x] == 1){
                v.push_back(x);
            }
        }
        for(auto i: v){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}