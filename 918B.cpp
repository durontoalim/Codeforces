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

map<string,int>mps;
map<string,string> mpss;
int hello()
{

    return 0;
}


int32_t main()
{
    FastIO();
    int n;
    cin>>test_case>>n;
    
    for (int i = 0; i < test_case; i++)
    {
        string str,str2;
        cin>>str>>str2;
        mps[str2]++;
        mpss[str2] = str;
    }

    for (int i = 0; i < n; i++)
    {
        string s,s2;
        cin>>s>>s2;
        string c_s;
        copy(s2.begin(), s2.begin()+(s2.length()-1), back_inserter(c_s));
        cout<<s<<' '<<s2<<" #"<<mpss[c_s]<<endl;
    }

    return 0;
}