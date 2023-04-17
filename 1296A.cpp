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
        int arr[n];
        int sum = 0;
        int odd = 0,even = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i] %2 != 0) odd++;
            else even++;
            sum += arr[i];
        }
        if(sum %2 != 0) cout<<"YES"<<endl;
        else{
            if(odd != 0 && even != 0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        } 
        
    }
    

    return 0;
}