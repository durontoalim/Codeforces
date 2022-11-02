#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    while(N--){
        long long int n;
        char e;
        cin>>n>>e;
        vector <char> v(n+2);
        bool bl = 1;

        for (int i = 1; i <= n ; i++)
        {
            cin>> v[i];
            if(v[i] != 'g'){
                bl = 0;
            }
        }
        bool bll = 1;
        long long int c = 0, g = 0, r = 0, y = 0;

        for (int i = n; i > 0; i--)
        {
            if(v[i] == 'g') bll = 0;
            if(bll) continue;
            c++;
            if(v[i] == e){
                r = max(c,r);
            }
            if(v[i] == 'g'){
                c = 0;
            }

        }

        for (int i = n; i > 0; i--)
        {
            /* code */
            c++;
            if(v[i] == e){
                r = max(r,c);
            }
            if(v[i] == 'g'){
                break;
            }

        }

        if(bl || e== 'g') r = 0;
        cout<< r << endl;
        
        
        
    }

    return 0;
}