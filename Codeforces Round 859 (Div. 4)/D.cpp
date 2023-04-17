//Author :: Utin
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

#define int long long
typedef vector<int> vi;
typedef vector<int>::iterator vit;
typedef pair<int,int> pi;
#define PB push_back
#define MP make_pair
#define F first
#define S second

#define case "Case "
#define semicollon ": "
#define endl '\n'

#define utin(i,n,N) for(int i = n; i< N; i++)
#define SQ(n) (n)*(n)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
const double PI = acos(-1);
#define MOD 1000000007

#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int cnt;
int test_case;

int hello()
{
    int x,n; cin>>x>>n; int sum = 0;

    vector<int>v;
    vector<int>pre;

    utin(i,0,x){
        int x1; cin>>x1;
        v.push_back(x1);
        sum += x1;
        pre.push_back(sum);
    }
 
    int sum2;

    while(n--){
        int l,r,value;
        cin>>l>>r>>value;
        int left;
        if(l == 1){
            left = 0;
        }
        else{
            left = pre[l-2];
        }
        sum2 = left + (sum - pre[r-1]) + (value * (r-l+1));
        if( sum2 % 2 == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        sum2 = sum;
        
    }
    
    return 0;
}

int32_t main()
{
    FastIO();
    cin>>test_case;
    while (test_case--)
    {
        hello();
    }

    return 0;
}