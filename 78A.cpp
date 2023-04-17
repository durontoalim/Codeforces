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



    string str,str2,str3; 
    getline(cin,str);
    getline(cin,str2);
    getline(cin,str3);
    int cnt = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            cnt++;
        }
    }
    for (int i = 0; i < str2.length(); i++)
    {
        
        if(str2[i] == 'a' || str2[i] == 'e' || str2[i] == 'i' || str2[i] == 'o' || str2[i] == 'u'){
            cnt2++;
        }
    }
    for (int i = 0; i < str3.length(); i++)
    {
        if(str3[i] == 'a' || str3[i] == 'e' || str3[i] == 'i' || str3[i] == 'o' || str3[i] == 'u'){
            cnt3++;
        }
    }

    if(cnt == 5 && cnt2 == 7 && cnt3 == 5){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    

    return 0;
}