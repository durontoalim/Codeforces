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
 
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void fffff () {			cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}
 
ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
 
 
int dx[] = { 0, 0, +1, -1, -1  +1, -1, +1 };
int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };



int32_t main()
{
    

    int N;
    cin>>N;
    while (N--)
    {
        string str;
        char s;
        cin>>str>>s;
        

        int len = str.length();
        int flag = 0;
        for (int i = 0; i < len; i++)
        {
            if(len == 1){
                if(str[0] == s){
                    cout<<"YES"<<endl;
                    flag = 1;
                }
               
            }
            if(str[i] == s && len > 1 &&  (i%2) == 0 && (len-1-i)%2 == 0){
                cout<<"YES"<<endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0) cout<<"NO"<<endl;
            
    }
    
    
    return 0;
    
 
}