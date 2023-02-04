#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
	int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        vector<int>v;
        for (int i = 0; i < x; i++)
        {
            int xx;
            cin>>xx;

            v.push_back(xx);
        }
        int cnt = 0;
        for (int i = 0; i < x; i++)
        {
            if(v[i] == 1) cnt++;
        }

        if(cnt % 2 == 0){
            cout<<x-cnt+cnt/2<<endl;
        }
        else cout<<x-cnt+cnt/2+1<<endl;
        
    }
    
	
	return 0;

}
