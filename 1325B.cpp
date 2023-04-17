#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int District_Count = unique(v.begin(), v.end())- v.begin();
        cout<<District_Count<<endl;
    }

    return 0;
}