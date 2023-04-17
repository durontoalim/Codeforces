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
        bool bol = 0;
        string str,s;
        int n; cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>str;
            s += str;
        }
        set<char>st;
        map<char,int>mp;
        for (int i = 0; i < s.length(); i++)
        {
            st.insert(s[i]);
            mp[s[i]]++;
        }

        for(auto i: st){
            if(mp[i]%n != 0){
                cout<<"NO"<<endl;
                bol = 1;
                break;
            }
        }
        if(bol){
            continue;
        }
        cout<<"YES"<<endl;
        
        
    }
    

    return 0;
}