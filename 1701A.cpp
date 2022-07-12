#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,t;
    cin>>N;

    while(N--){
        t = 0;

        int a,b,c,d;
        cin>>a>>b;
        cin>>c>>d;

        if(a == 1) t++;
        if(b == 1) t++;
        if(c == 1) t++;
        if(d == 1) t++;

        if(t == 0){
            cout<<t<<endl;
        }
        else if(t == 4){
            cout<<"2"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }

    return 0;
}