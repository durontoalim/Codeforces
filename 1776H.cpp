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
    cnt = 0;
    int x; cin>>x;
    int arr[x+1],arr2[x+1];
    for (int i = 0; i < x; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        cin>>arr2[i];
    }

    int j=x;
    for(int i = x-1; i >= 0 ; i--){
        for(j = j-1; j >= 0; j--){
            if(arr2[i] == arr[j]){
                cnt++;
                break;
            }
        }
        if(j==0)break;
    }

    cout<<x-cnt<<endl;
    
    return 0;
    
}


int32_t main()
{
    cin>>test_case;
    while (test_case--)
    {
        hello();
    }
    

    return 0;
}