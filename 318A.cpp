#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int N,posi,i,result;
    long long int t2;
    
    cin>>N>>posi;


    if(N%2 == 0){
        t2 = N/2;
    }
    else{
        t2 = (N/2) + 1;
    }

    if(posi <= t2){
        result = (posi * 2 ) - 1 ;
    }
    else{
        result = abs( posi - t2 ) * 2;
    }

    cout<<result<<endl;



    return 0;
}