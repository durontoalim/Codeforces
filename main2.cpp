#include<bits/stdc++.h>

#define int long long
using namespace std;
 
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;
typedef vector<ll> vl;
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

pi p;

bool check ( pair <pair < string,int >, pair < int,int > > P , pair < pair < string,int>,pair<int,int>>P2)
{
    if(P.S.F!=P2.S.F){
        if(p.S.F>p2.S.F)return true;
        else return false;
    }
    else{
        if(a.first.second!=b.first.second){
            if(a.first.second>b.first.second)return true;
            else return false;
        }
        else{
            if(a.first.first!=b.first.first){
                if(a.first.first<b.first.first)return true;
                else return false;
            }
            else{
                if(a.second.second!=b.second.second){
                    if(a.second.second<b.second.second)return true;
                    else return false;
                }
                else return false;
            }
        }
    }

}


int32_t main()
{
    int t;
    cin >> t;
    while(t--){
        int n,i,j;
        cin >> n;

        vector<pair< pair<string,int> , pair<int,int> >>v;

        for(i=0; i<n; i++){
            int math,eng,roll;
            string name;
            cin >> name >> math >> eng >> roll;
            v.push_back(make_pair(make_pair(name,math) , make_pair(eng,roll)));
        }
        sort(all(v),check);
        for(i=0; i<v.size(); i++){
            cout << v[i].first.first << ' ' << v[i].first.second << ' ' << v[i].second.first << ' ' << v[i].second.second << endl;
        }
    }
    return 0;
}