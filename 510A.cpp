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


    int a,b;
    cin>>a>>b;
    int count = 1;
    for (int i = 0; i < a; i++)
    {
        if(i%2 == 0){
            for (int i = 0; i < b; i++)
            {
                cout<<"#";
            }
            cout<<endl;
        }

        /* code */
        if(i%2 == 1){
            if(count%2 == 1){
                for (int i = 0; i < b-1; i++)
                {
                    cout<<".";
                }
                cout<<"#"<<endl;
            }
            if(count%2 == 0){
                cout<<"#";
                for (int i = 0; i < b-1; i++)
                {
                    cout<<".";
                }
                cout<<endl;
                
            }


            count++;

        }
        
    }
    


    return 0;
}