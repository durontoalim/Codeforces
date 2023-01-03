#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    pair<int,int> pr[1000];
    for (int i = 0; i < b; i++)
    {
        int x,y;
        cin>>x>>y;
        pr[i].first = x;
        pr[i].second = y;
    }
    sort(pr,pr+b);
    int cnt = 0;
    for (int i = 0; i < b; i++)
    {
        if(pr[i].first >= a){
            cnt++;
            break;
        }
        else{
            a += pr[i].second;
        }
    }

    if(0 < cnt){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    
    

    return 0;
}