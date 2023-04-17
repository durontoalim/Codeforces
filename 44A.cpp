#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N; cin>>N;
    
    vector< pair<string, string> > v(N);

    for(int i=0; i<N; i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    int sz = unique(v.begin(),v.end()) - v.begin();

    cout<<sz<<endl;

    return 0;
}