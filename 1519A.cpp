#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
	int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int x;
        if(c==0)
        {
            if(a==b)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        else{
           int aa=max(a,b);
           int bb=min(a,b);
           c++;
           x=bb*c;
           if(x>=aa)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
        }
    }
    
    
	
	return 0;

}
