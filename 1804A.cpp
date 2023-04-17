#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N; cin>>N;
    while(N--)
    {
        int a,b; cin>>a>>b;
        int sum = abs(a)+abs(b);
        int mn = min(abs(a),abs(b));
        int dif = sum - (mn*2);
        cout<< (mn*2) + max(0,(dif*2)-1)<<endl;
    }

    return 0;
}