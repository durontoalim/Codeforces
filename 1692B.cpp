#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    while (N--)
    {
        set<int>st;
        int n;
        cin>>n;
        int store = n;
        while (store--)
        {
            
            int x;
            cin>>x;
            st.insert(x);
        }
        int sub = n - st.size();
        int result = st.size();
        if(sub % 2 == 1){
            cout<<result - 1 <<endl;
        }
        else{
            cout<< result <<endl;
        }
        
        
        
    }
    

    return 0;
}