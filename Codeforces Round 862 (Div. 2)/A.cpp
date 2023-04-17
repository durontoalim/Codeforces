#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t;cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int arr[n];
        int sum;
        int xx = 0;
        bool bol = true;

        for (int x = 0; x < n; x++)
        {
            cin>>arr[x];
        }

        while (xx < pow(2,8)){
            sum = 0;
            int d;
            for (int x = 0; x < n; x++)
            {
                d = arr[x]^xx;
                sum ^= d;
            }
            
            if(sum == 0){
                cout<<xx<<endl;
                bol = false;
                break;
            }
            xx++;
        }
        if(bol) cout<<"-1\n";
        
    }
    

    return 0;
}