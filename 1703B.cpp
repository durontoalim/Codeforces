#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    cin.ignore();
    while (N--)
    {
        set <char> st;
        int n; string str;
        cin>>n;
        cin.ignore();
        cin>>str;
        for (int i = 0; i < n; i++)
        {
            st.insert(str[i]);
        }
        int result = (st.size() * 2) + (n - st.size());
        cout<<result<<endl;
        
    }
    

    return 0;
}