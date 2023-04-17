#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main()
{
    FastIO();
    int N; cin>>N;
    while (N--)
    {
        int n; cin>>n;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        if(v[0] != 1){
            cout<<"NO"<<endl;
            continue;
        }
        int sum =1;
        bool chk = false;
        for (int i = 1; i < n; i++)
        {
            if(sum >= v[i]){
                sum += v[i];
            }
            else{
                chk = true;
                break;
            }
        }
        if(chk){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }   
    }
    return 0;
}