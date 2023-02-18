#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; cin>>N;
    while(N--){
        int n; cin>>n;
        vector<int>v;
        set<int>st;
        int cnt = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            v.push_back(x);
            if(x == 2) cnt++;
            if(x == 1) cnt2++;
        }
        int t = 0;
        if(cnt%2 == 1){
            cout<<"-1"<<endl;
        }
        else if(cnt2 == n){
            cout<<"1"<<endl;
        }
        else if(cnt%2 == 0){
            int cn = cnt/2;
            for (int i = 0; i < n; i++)
            {
                if(v[i] == 2){
                    t++;
                }
                if(t == cn){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        
    }

    return 0;
}