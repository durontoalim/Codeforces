#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N; cin>>N;
    while (N--)
    {
        int n; cin>>n;
        cin.ignore();
        string str;

        getline(cin,str);

        set<char>st;
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == ' ') continue;
            st.insert(str[i]);
        }
        string s;
        for (auto i: st)
        {
            s += i;
        }
        cout<<s<<endl;
        // int t = 1, cnt = s.length()-1;
        // for(int i=0; i<s.length()/2; i++){
        //     if(s[i] != s[cnt]){
        //         t = 0;
        //         break;
        //     }
        //     cnt--;
        // }

        // if(t == 1){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
    }
    

    return 0;
}