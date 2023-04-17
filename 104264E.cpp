#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define M 1000000
bool marked[M];

int32_t main()
{
    FastIO();
    int cnt = 0;
    int n; cin>>n;
    int arr[n];
    map<int, int>mp;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        int x = (arr[i] - arr[i-1]);
        mp[x]++;
        if(mp[x] > mx){
            mx = mp[x];
        }
    }
    
    cout<<mx<<endl;

    

    return 0;
}