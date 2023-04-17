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

bool isPalindrome(string str){
    for (int i = 0; i < str.length()/2; i++)
    {
        if(str[i] != str[str.length()-1-i]) return false;
    }
    return true;
}

void hello()
{
    string str; cin>>str;
    
    set<char> st;
    set<char>::iterator it;

    for (int i = 0; i < str.length(); i++)
    {
        st.insert(str[i]);
    }
    
    if(st.size() == 1){
        for(auto i: st){
            if(i == 'a'){
                cout<<"NO\n";
                return;
            }
        }
    }

    if(isPalindrome('a'+str)){
        cout<<"YES"<<endl;
        cout<<str+'a'<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<'a'+str<<endl;
    }
    
    
    

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