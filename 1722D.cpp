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

/////////////////////////////////////////
// User Define Function
////////////////////////////////////////

void user_defined();

int fibo(int n);

bool cmp(int a,int b);



int gcd(int n1, int n2){

    while (n2 != 0)
    {
        int temp = n1 % n2;
        n1 = n2;
        n2 = temp;
    }

    return n1;
    
}

///////////////////////////////////////////
//////////////////////////////////////////

int main(){

    // Speed Booster

    FastIO;

    // Implement

    int N;
    cin>>N;

    while (N--)
    {
        int n;
        cin>>n;

        int gcdd = gcd(n, 1);
        int lcmm = (n*1) / gcdd;

        int result = lcmm/gcdd;

        cout<<result<<endl;
    }
    




    return 0;
}



////////////////////////////
///////////////////////////


bool cmp(int a, int b){
    if(a > b){
        return true;
    }
    else return false;
}