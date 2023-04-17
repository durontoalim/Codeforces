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
    string str2;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = tolower(str[i]);
        str2 += ch;
    }
    cnt = 2;
    int m =0, e =0, o = 0, w = 0;

    if(str2 [0] == 'm' && str2[str2.length() -1] == 'w' && str2.length() > 3){
        
        for (int i = 1; i < str2.length(); i++)
        {
            if(str2[i] != str2[i-1]){
                if(str2[i] == 'e' && str2[i-1] == 'm'){
                    
                }
                else if(str2[i] == 'o' && str2[i-1] == 'e'){
                    cnt = 3;
                    e++;
                }
                else if(str2[i] == 'w' && str2[i-1] == 'o'){
                    cnt = 4;
                     o++;
                }
                else{cout<<"NO\n";return 0;}
            }
            
        }
    }
    else{
        cout<<"NO"<<endl;
        return 0;
    }
    
    cout<<"YES\n";
    
    
    
    


   

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