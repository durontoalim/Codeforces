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
    string str; cin>>str;
    map<char,int>mp;
    int t = 0;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0){
            if(mp[str[i]] == 1){
                t = 1;
            }
            else{
                mp[str[i]] = 0;
                v.push_back(0);
            }
        }
        else{
            if(mp.find(str[i]) != mp.end()){
                if(mp[str[i]] == 0){
                    t = 1;
                }
                else{
                    v.push_back(1);
                }
            }
            else{
                mp[str[i]] = 1;
                v.push_back(1);
            }
           
        }
        if(t ==1){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    
    // for(auto i: v){
    //     cout<<i<<" ";
    // }
    for (int i = 0; i < v.size(); i++)
    {
        if(i%2 == 1){
            if(v[i] != 1){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else{
            if(v[i] != 0){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }

    cout<<"YES"<<endl;

    
    
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