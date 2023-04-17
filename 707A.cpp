#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t,t2; cin>>t>>t2;
    int x = t*t2;
    vector<char>v;

    for (int i = 0; i < x; i++)
    {
        char ch; cin>>ch;
        v.push_back(ch);
    }
    bool bol = false;
    for(int i=0; i<x; i++){
        if(v[i] == 'C' || v[i] == 'M' || v[i] == 'Y'){
            bol = true;
            break;
        }
    }

    if(bol) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
    

    return 0;
}