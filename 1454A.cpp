#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int N; cin>>N;
    while (N--)
    {
        int x; cin>>x;
        if(x%2==0){
            for (int i = x; i>0; --i)
            {
                cout<<i<<" ";
            }
            cout<<endl;            
        }
        else{
            int n = (x/2)+1;
            for (int i = x; i>1; --i)
            {
                if(n==i){
                    cout<<1<<" ";
                    continue;
                }
                cout<<i<<" ";
            }
            cout<<n<<endl;            
        }
            
    }
    
	
	
	
	return 0;

}