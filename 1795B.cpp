#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; cin>>N;
    while (N--)
    {
        int a,b; cin>>a>>b;
        int cnt  = 0, cnt2 = 0;
        for (int i = 0; i < a; i++)
        {
            int m,k; cin>>m>>k;
            if(m == b) cnt++;
            if(k == b) cnt2++;
        }
        if(cnt > 0 && cnt2 > 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    

    return 0;
}