#include<bits/stdc++.h>

using namespace std;
 
 
typedef long long ll;
typedef vector<int> vi;
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



int main()
{
    FastIO();

    int N;
    cin>>N;

    int arr[N];

    int one = 0, two = 0, three = 0, four = 0;
    int result = 0;

    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
        if(arr[i] == 1) one++;
        if(arr[i] == 2) two++;
        if(arr[i] == 3) three++;
        if(arr[i] == 4) four++;
    }

    result += four;

    result += three;

    one = one - three;
    if(one < 0) one = 0;

    if(two % 2 == 0){
        result += (two/2);

        two = 0; 
    }
    else{
        two = (two/2) + 1;
        result += two;

        one -= 2;

        if(one < 0) one = 0;
    }

    one = ceil(one / 4.00);

    result += one;

    cout<<result<<endl;



    return 0;
    
 
}