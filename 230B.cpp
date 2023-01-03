#include <iostream>
#include <math.h>
#include<stdlib.h>
 
#define int long long
 
using namespace std;
 
int arr[1000000] = {0};
void sieve(){
    for (int i = 2; i*i <= 1000000; i++)
    {
        if(arr[i] == 0){
            for (int j = 2; i*j <= 1000000; j++)
            {
                arr[i*j] = 1;
            }
        }
    }
}
 
 
int32_t main()
{
    sieve();
 
    int N;
    cin>>N;
    int a[N+10];
 
    for (int i = 0; i < N; i++)
    {
        cin>>a[i];
 
        int sq = sqrt(a[i]);
        if(a[i] == 1) cout<<"NO"<<endl;
        else if( (sq*sq == a[i]) && arr[sq] == 0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
 
    return 0;
}