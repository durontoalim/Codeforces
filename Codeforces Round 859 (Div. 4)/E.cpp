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
    int n; cin>>n;
    int arr[n+10];
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }

    int mid, len, low = 1, high = n;

    while (low <= high)
    {
        int sum = 0;

        if(low == high) break;
        mid = (high + low)/2;
        len = (mid - low +1);
        cout<<"? "<<len<<" ";
        for (int i = low; i <= mid; i++)
        {
            cout<<i<<" ";
            sum += arr[i];
        }
        cout<<endl;
        cout.flush();

        int judge; cin>>judge;

        if(judge > sum){
            high = mid;
        }
        else{
            low = mid+1;
        }
    }
    cout<<"! "<<low<<endl;
    cout.flush();
    
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