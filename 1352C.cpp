#include<bits/stdc++.h>
#define int long long
using namespace std;
 
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl; 
typedef pair<int,int> pi;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pi> vipi;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define REP(i,n,N) for(int i = n; i< N; i++)
#define SQ(n) (n)*(n)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 1000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
 
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))


int32_t main()
{
    int N;
    cin>>N;

    while (N--)
    {
        int n,k;
        cin>>n>>k;
        int devi = k/n;

        if(k%n == 0) cout<<devi+k<<endl;
        else{
            cout<<devi+k+1<<endl;
        }
    }
    
    
    return 0;
    
 
}