#include <bits/stdc++.h>
using  namespace std;

#define FastIO                      \
    ios::sync_with_stdio(false);    \
    cin.tie(0);                     \
    cout.tie(0);                    \

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


    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    set<int> set;
    int push;
    for (int i = 1; i <= d; i++)
    {
        if(d >= k*i ){
            push = k*i;
            set.insert(push);
        }
    }
    for (int i = 1; i <= d; i++)
    {
        if(d >= l*i ){
            push = l*i;
            set.insert(push);
        }
    }
    for (int i = 1; i <= d; i++)
    {
        if(d >= m*i ){
            push = m*i;
            set.insert(push);
        }
    }
    for (int i = 1; i <= d; i++)
    {
        if(d >= n*i ){
            push = n*i;
            set.insert(push);
        }
    }

    int t = 0;

    for(auto i: set){
        t++;
    }

    cout<<t<<endl;
  
    

    return 0;
}