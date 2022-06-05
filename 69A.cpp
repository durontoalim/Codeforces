#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int N,sum=0, sum2=0, sum3 = 0,result=0;

    cin>>N;

    int a[N],b[N],c[N];

    for(int i=0; i<N; i++){
        cin>>a[i]>>b[i]>>c[i];
        sum += a[i];
        sum2 += b[i];
        sum3 += c[i];

    }

    if(sum == 0 && sum2 == 0 && sum3 == 0){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
    
    return 0;
}