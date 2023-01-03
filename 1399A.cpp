#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937
int main()
{
    int N;
    cin>>N;

    while (N--)
    {
        int n;
        cin>>n;
        
        vi v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(all(v));
        int  t = 0;

        for (int i = 0; i < n-1; i++)
        {
            if(v[i+1]- v[i] > 1) {
                t++;
                break;
            }
        }

        if(t == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
    
    return 0;
}