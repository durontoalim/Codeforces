#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int n,x; cin>>n>>x;
    int arr[n+1];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i] < 5){
            if( 5-arr[i] >= x) cnt++;
        }
    }
    cout<<cnt/3<<endl;

    return 0;
}