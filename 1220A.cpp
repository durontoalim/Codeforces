#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t; cin>>t;
    string str; cin>>str;
    map<char,int>mp;
    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i]]++;
    }
    int one =0, zero = 0;
    while (1)
    {
        if(mp['o'] > 0 && mp['n'] > 0 && mp['e'] > 0){
            one += 1;
            mp['o']--;
            mp['n']--;
            mp['e']--;
        }
        else break;
    }

    while (1)
    {
        if(mp['z'] > 0 && mp['e'] > 0 && mp['r'] > 0 && mp['o'] > 0 ){
            zero += 1;
            mp['z']--;
            mp['e']--;
            mp['r']--;
            mp['o']--;
        }
        else break;
    }
    
    for (int i = 0; i < one; i++)
    {
        cout<<1<<" ";
    }
    for (int i = 0; i < zero; i++)
    {
        cout<<0<<" ";
    }
    cout<<endl;
    
    

    return 0;
}