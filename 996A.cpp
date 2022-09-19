#include <bits/stdc++.h>

#define FastIO                      \
    ios::sync_with_stdio(false);    \
    cin.tie(0);                     \
    cout.tie(0);                    \


using  namespace std;

#define for_loop(i, n) for (int i = 0; i < int(n); i++)
#define PI acos(-1)
#define endl      "\n"
#define clr(arr,x)      memset(arr, x, sizeof arr)
#define vout(v,sz)      for(int w=0;w<sz;w++){if(w) cout<<" ";else cout<<endl; cout<<v[w];}
#define all(v)          v.begin(), v.end()
#define rall(v)         v.rbegin(), v.rend()
#define F first
#define S second
#define tu tuple <int, int, int>
#define eps (double)(1e-7)
 
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
void file();

// User Define Function

void user_defined();

int fibo(int n);

//--------------------------------------

int main(){

    // Speed Booster

    FastIO;

    // Implement


    int N;
    cin>>N;

    int mod,devisor,mod2,mod3,mod4;

    
    devisor = N / 100;
    mod = N % 100;

    
    devisor += mod / 20;
    mod = mod % 20;

    
    devisor += mod / 10;
    mod = mod % 10;

    
    devisor += mod / 5;
    mod = mod % 5;

    
    devisor += mod / 1;
    mod = mod % 1;

    cout<<devisor<<endl;


    // if(N >= 100){
    //     mod = N%100;
    //     devisor = N/100;
    //     if(mod >= 20){
    //         mod2 = mod%20;
    //         devisor += mod/20;
    //         if(mod2 >= 10){
    //             mod3 = mod2%10;
    //             devisor += mod2 / 10;
    //             if(mod3 >= 5){
    //                 mod4 = mod3 % 5;
    //                 devisor = mod3 / 5;
    //                 if(mod4 >= 1){
    //                     devisor += mod3 / 1;
    //                     cout<<devisor<<endl;
    //                 }
    //                 cout<<devisor<<endl;
    //             }
    //             cout<<devisor<<endl;
    //         }
    //         cout<<devisor<<endl;
    //     }
    //     cout<<devisor<<endl;
    // }
    


    return 0;
}