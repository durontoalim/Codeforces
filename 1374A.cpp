#include <bits/stdc++.h>
 
using namespace std;
 

int main()
{
    int N;

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin>>N;

    while(N--){

        int t,x,y,n;
        cin>>x>>y>>n;

        int rem = n%x;
        if(rem > y ){
            n -= rem - y;
        }
        else if( rem < y ){
            t = y - rem;
            x -= t;
            n -= x;
        }

        cout<<n<<endl;
        
    }

    return 0;
}