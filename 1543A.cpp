#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n; cin>>n;
    while(n--){
        int a,b; cin>>a>>b;
 
        int maxx = max(a,b);
        int minn = min(a,b);
        int subs = maxx-minn;
 
        if(a == b){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        int x = a%subs;
        int y = b%subs;
 
        if(x != y){
            cout<<0<<" "<<0<<endl;
        }
        else{
            int result = min(y,subs-y);
            cout<<subs<<" "<<result<<endl;
        }
 
    }
    
	return 0;
}