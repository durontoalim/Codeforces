#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,k;

    cin>>N>>k;

    while(k--){
        if(N%10 == 0){
            N /= 10;
        }
        else{
            N--;
        }
    }

    cout<<N<<endl;

    return 0;
}