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
        int arr[n+10];
        for (int i = 1; i <= n; i++)
        {
            cin>>arr[i];
        }
        bool bol = false;
        for (int i = 1; i <= n; i++)
        {
            if(i >= arr[i]){
                bol = true;
                break;
            }
        }
        if(bol){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    

    return 0;
}