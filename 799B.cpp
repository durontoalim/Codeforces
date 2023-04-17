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

const int M = 2e5+10;
int arr[M];
int a[M];
int b[M];

int32_t main()
{
    FastIO();
    int N; cin>>N;
    for (int i = 1; i <= N; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i <= N; i++)
    {
        cin>>a[i];
    }
    for (int i = 1; i <= N; i++)
    {
        cin>>b[i];
    }

    priority_queue <int, vector<int>, greater<int>> pq[4][4];

    for (int i = 1; i <= N; i++)
    {
        pq[a[i]][b[i]].push(arr[i]);
    }
 
    int x; cin>>x;
    while (x--)
    {
        int c; cin>>c;
        int m,n;
        int ans = INT_MAX;

        for (int i = 1; i < 4; i++)
        {
            if( !pq[c][i].empty()  && pq[c][i].top() < ans){
                ans = pq[c][i].top();
                m = c; n = i;
            }
        }

        for (int i = 1; i < 4; i++)
        {
            if( !pq[i][c].empty()  && pq[i][c].top() < ans){
                ans = pq[i][c].top();
                m = i; n = c;
            }
        }

        if(ans == INT_MAX) ans = -1;
        else {
            pq[m][n].pop();
        }

        cout<<ans<<" ";
    }
    cout<<endl;
    
    return 0;
}