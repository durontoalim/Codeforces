#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while(N--){

        long long int n;

        cin>>n;

        if(n%2 == 1){
            cout<<"-1\n";
        }
        else{
            cout<<"0 0 "<<n/2<<endl;
        }

    }
    


    return 0;
}