#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while (N--)
    {
        int n;
        cin>>n;
        
        set<int>st;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            
            st.insert(x);
        }
        int count = 0;
        
        for(auto i: st){
            count++;
        }
        if(count == n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        st.clear();
        
    }
    

    return 0;
}