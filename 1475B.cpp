#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; cin>>N;

    while (N--)
    {
        int n; cin>>n;
        int k = n/2020;

        if(k < 1) cout<<"NO"<<endl;
        else{
            int t = n%2020;

            if(t > k){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    


    return 0;
}