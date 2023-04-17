#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t;
    cin>>t;
    while (t--)
    {
        vector<int>v;
        int a,b,c,n; cin>>a>>b>>c>>n;

        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(n);
        
        int sum = accumulate(v.begin(),v.end(), 0);
        int mx = *max_element(v.begin(), v.end()-1);


        if(sum%3 == 0 && mx <= sum/3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    

    return 0;
}