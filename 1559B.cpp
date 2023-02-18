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

int test_case;


int32_t main()
{
    cin>>test_case;
    while (test_case--)
    {
        int n; cin>>n;
        string str; cin>>str;
        string sub_st = str;
        if(str[0] == '?') str[0] ='B';
        utin(i,1,n){
            if(str[i] == '?' && str[i-1] == 'B') str[i] = 'R';
            else if(str[i] == '?' && str[i-1] == 'R') str[i] = 'B';
        }
        int cnt = 0;
        utin(i,1,n){
            if(str[i] == str[i-1]) cnt++;
        }

        if(cnt == 0){
            cout<<str<<endl;
            continue;
        }

        string str2;
        str2 += sub_st;
        if(str2[0] == '?'){
            str2[0] = 'R';
        }

        utin(i,1,n){
            if(str2[i] == '?' && str2[i-1] == 'B') str2[i] = 'R';
            else if(str2[i] == '?' && str2[i-1] == 'R') str2[i] = 'B';
        }
        
        int cnt2 = 0;
        utin(i,1,n){
            if(str2[i] == str2[i-1]) cnt2++;
        }

        if(cnt < cnt2){
            cout<<str<<endl;
        }
        else if(cnt > cnt2){
            cout<<str2<<endl;
        }
        else{
            cout<<str<<endl;
        }
        
    }

    return 0;
}