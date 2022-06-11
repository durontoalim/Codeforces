#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,w,sum = 0;
    cin>>k>>n>>w;

    for(int i=1; i<= w ; i++){
        sum += (i*k);
    }

    int result = sum - n;

    if(result >= 0){
        cout<<result<<"\n";
    }
    else{
        cout<<"0\n";
    }
    

    return 0;
}