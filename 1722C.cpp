#include <bits/stdc++.h>
#define FastIO                      \
    ios::sync_with_stdio(false);    \
    cin.tie(0);                     \
    cout.tie(0);                    \


using  namespace std;

#define for_loop(i, n) for (int i = 0; i < int(n); i++)
#define PI acos(-1)
#define endl      "\n"
#define clr(arr,x)      memset(arr, x, sizeof arr)
#define vout(v,sz)      for(int w=0;w<sz;w++){if(w) cout<<" ";else cout<<endl; cout<<v[w];}
#define all(v)          v.begin(), v.end()
#define rall(v)         v.rbegin(), v.rend()
#define F first
#define S second
#define tu tuple <int, int, int>
#define eps (double)(1e-7)
 
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
void file();

/////////////////////////////////////////
// User Define Function
////////////////////////////////////////

void user_defined();

int fibo(int n);

bool cmp(int a,int b);

///////////////////////////////////////////
//////////////////////////////////////////
using namespace std;

int main()
{
    FastIO;

    
    int N;

    cin>>N;

    while (N--)
    {
        int n;
        cin>>n;

        map<string,int>mp;
        vector<string> v;
        for(int i=0; i<3*n; i++){
            string str;
            cin>>str;
            v.push_back(str);
            mp[str]++;
        }
        int ans1 = 0, ans2 = 0, ans3 = 0;
        for (int i = 0; i < n; i++)
        {
            if(mp[v[i]] == 1){
                ans1 += 3;
            }
            else if(mp[v[i]] == 2){
                ans1 += 1;
            }
        }
        for (int i = n; i < 2*n; i++)
        {
            if(mp[v[i]] == 1){
                ans2 += 3;
            }
            else if(mp[v[i]] == 2){
                ans2 += 1;
            }
        }
        for (int i = 2*n; i < 3*n; i++)
        {
            if(mp[v[i]] == 1){
                ans3 += 3;
            }
            else if(mp[v[i]] == 2){
                ans3 += 1;
            }
        }

        cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
        

        
    }
    

    return 0;
}