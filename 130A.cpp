#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,a;

    cin>>N;

    while(N--){
        cin>>a;

        if(a == 1){
            a = 10;
            break;
        }
    }

    if(a == 10){
        cout<<"HARD\n";
    }
    else{
        cout<<"EASY\n";
    }

    return 0;
}