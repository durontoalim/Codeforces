#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,a,b,c,d,n;
    cin>>N;

    while(1){
        N++;
        n  = N;
        a = n%10;
        n /= 10;
        b = n%10;
        n /= 10;
        c = n%10;
        n /= 10;
        d = n%10;

        if(a != b && a != c && a != d && b != c && b != d && c != d){
            cout<<N<<endl;
            break;
        }

    }

    return 0;
}