#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while(N--){
        long long int n;
        cin>>n;

        if(n <= 2){
            cout<<"1"<<endl;
        }
        else{
            cout<<1+ (n-1) / 2 <<endl;
        }
    }

    return 0;
}