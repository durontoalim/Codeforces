#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a,b , count;

    cin>>a>>b;

    count = 0;

    while(1){

        a *= 3;
        b *= 2;

        count++;

        if(a>b){
            break;
        }
    }

    cout<<count<<endl;

    return 0;
}