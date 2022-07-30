#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;

    int count = 0;

    if(a == b || a == c || a == d){
        count++;
    }
    if(b == c || b == d){
        count++;
    }
    if(c == d){
        count++ ;
    }
    
    cout<<count<<endl;

    return 0;
}