#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
	int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
        }
        bool found = false;
        for (int i = 0; i < n; ++i) {
            int x =floor(sqrt(ar[i]));
            if ( x*x != ar[i]){
                found = true;
                break;
            }
        }
        if (found){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
	
	return 0;

}
