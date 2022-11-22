#include<bits/stdc++.h>

using namespace std;

#define int long long

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define FastIO                      \
    ios::sync_with_stdio(false);    \
    cin.tie(0);                     \
    cout.tie(0);                    \



#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;


int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

bool cmp(int a, int b){
    if(a > b){
        return true;
    }
    else return false;
}



template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << "{";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                            }
                    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; utin(args); } while(0)

void utin () {
            cerr << endl;
}

template <typename T>
void utin( T a[], int n ) {
            for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}

template <typename T, typename ... hello>
void utin( T arg, const hello &... rest) {
            cerr << arg << ' ';
                utin(rest...);
}

void sieve(int n);
bool isPrime(int num);


int32_t main()
{
    // FastIO;

    int n;
    cin>>n;

    while (n--)
    {
        int a,b;
        cin>>a>>b;

        string str[a];

        for (int i = 0; i < a; i++)
        {
            cin>>str[i];
        }
        int t = 0;

        for (int i = 0; i < a-1; i++)
        {
            
            for (int j = 0; j < b-1; j++)
            {
                if(str[i][j] == '1' && str[i][j+1] == '0' && j < b-1 && str[i+1][j] == '1' && i <a-1 && str[i+1][j+1] == '1'){
                    cout<<"NO"<<endl;
                    t = 1;
                    break;
                }
                else if(str[i][j] == '0' && str[i][j+1] == '1' && j<b-1 && str[i+1][j] == '1' && i<a-1 && str[i+1][j+1] == '1'){
                    cout<<"NO"<<endl;
                    t = 1;
                    break;
                }
                else if(str[i][j] == '1' && str[i][j+1] == '1' && j<b-1 && str[i+1][j] == '1' && i<a-1 && str[i+1][j+1] == '0'){
                    cout<<"NO"<<endl;
                    t = 1;
                    break;
                }
                else if(str[i][j] == '1' && str[i][j+1] == '1' && j<b-1 && str[i+1][j] == '0' && i<a-1 && str[i+1][j+1] == '1'){
                    cout<<"NO"<<endl;
                    t = 1;
                    break;
                }
            }

            if(t == 1) break;
            
        }
        if(t == 0) cout<<"YES\n";
        
    }


    return 0;
}





// Prime

#define M 100000000
int marked[M/64 + 2];

#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x)  marked[x/64] |= (1<<((x%64)/2))

void sieve(int n) {
  for (int i = 3; i * i < n; i += 2) {
    if (!on(i)) {
      for (int j = i * i; j <= n; j += i + i) {
        mark(j);
      }
    }
  }
}

bool isPrime(int num) {
  return num > 1 && (num == 2 || ((num & 1) && !on(num))); 
}