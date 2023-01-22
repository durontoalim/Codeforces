#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{

    int N;
    cin>>N;

    while (N--)
    {
        int n,k;
        cin>>n>>k;
        int result = 0;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            result = max(result,x);
        }

        if(result == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
	
	return 0;

}