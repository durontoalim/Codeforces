#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    string str,str2; cin>>str>>str2;
    int first,second;
    vector<string>v = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] == str){
            first = i;
        }
        if(v[i] == str2){
            second = i;
        }
    }

    if( (first+28)%7 == second || (first+30)%7 == second || (first+31)%7 == second) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    

    return 0;
}