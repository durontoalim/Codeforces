#include <bits/stdc++.h>

using namespace std;

#define int long long

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
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
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))


int multi(int a){
    int mn = 9, mx = 0;
    while (a > 0)
        {
            int temp = a%10;
            mn = min(mn,temp);
            mx = max(mx,temp);
            a /= 10;
        }

        return mn*mx;
}

int32_t main()
{
    int N;
    cin>>N;

    while (N--)
    {
        int a,b;
        cin>>a>>b;
        


        int t =b- 1;
        int x;
        while (t--)
        {
            x = multi(a) ;
            if(x == 0) {
                break;
            }
            a += x;
        }

        cout<<a<<endl;

        

    }
    

    return 0;
}