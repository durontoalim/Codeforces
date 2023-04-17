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
        map<char,int>mp;
        string str; cin>>str;
        set<char>st;
        for (int i = 0; i < 4; i++)
        {
            st.insert(str[i]);
            mp[str[i]]++;
        }

        if(st.size() == 1) cout<<"-1"<<endl;
        else if(st.size() == 2){
            int result = 4;
            for(auto i: st){
                if(mp[i] == 3){
                    result = 6;
                    break;
                }
            }
            cout<<result<<endl;
        }
        else cout<<4<<endl;
        
    }
    

    return 0;
}