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

bool cmp( const pair<int,int>&p1, pair<int,int>&p2 ){
    if(p1.first > p2.first) return 1;
    else if(p1.first == p2.first) return (p1.second < p2.second);

    return 0;
}

int32_t main()
{
    int n,k; cin>>n>>k;
    vector< pair<int,int> > v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
        v[i].first *= -1;
    }
    sort(v.begin(), v.end());
    cnt = 0;
    for(auto i: v){
        if(v[k-1] == i) cnt++;
    }
    cout<<cnt<<endl;
    
    return 0;
}