#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int N;

    cin>>N;

    int mod,t=0,t2=0,count=0;

    while(N != 0){
        mod = N%10;

        N /= 10;

        if(mod == 7){
            t++;
        }
        if(mod == 4){
            t2++;
        }

        count++;
    }

    int t3 = t+t2;

    if(t3 == 4 || t3 == 7){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

    return 0;
}