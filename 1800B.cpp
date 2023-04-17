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
    int n, k; cin>>n>>k;
    string str2; cin>>str2;
    map<char,int> mp;
    int result = 0;
    for (int i = 0; i < str2.length(); i++)
    {
        mp[str2[i]]++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        int mn = min(mp[i],mp[i-32]);
        result += mn;
        mp[i] -= mn;
        mp[i-32] -= mn;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        int mx = max(mp[i],mp[i-32]);
        int x = min(mx/2,k);
        result += x;
        k -= x;
    }
    
   
    cout<<result<<endl;

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