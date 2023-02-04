#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; cin>>N;
    while (N--)
    {
        int n; cin>>n;
        string str; cin>>str;
        set<char>st;
        set<char>st2;
        for (int i = 0; i < n; i++)
        {
            st.insert(str[i]);
        }
        int cnt  = 0;
        for(auto i: st){
            int flag  = 0,f  = 0;
            for (int j = 0; j < n; j++)
            {
                if(flag == 1){
                    if(str[j] == i){
                        st2.insert(str[j]);
                        break;
                    }
                }
                if(f == 0){
                    if(i == str[j]){
                        flag = 1;
                        f = 1;
                    }
                }
                
                
            }
        }


        if(st.size() == n){
            cout<<st.size()<<endl;
        }
        else cout<<st.size()+st2.size()<<endl;
        
    }
    

    return 0;
}