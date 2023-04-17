#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N; cin>>N;
    int arr[N+10];
    set<int>st;
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
        st.insert(arr[i]);
    }
    if(st.size() < 2){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<*(++st.begin())<<endl;

    return 0;
}