#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,result, result2;
    cin>>a>>b>>c;

    if(a%c == 0){
        result = a/c;
    }
    else result = a/c + 1;

    if(b%c == 0){
        result2 = b/c;
    }
    else result2 = b/c + 1;

    cout<<result*result2<<endl;
    


    return 0;
}