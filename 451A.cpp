#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int t = 1, cnt = 0;

    for( ; ; ){
        if(a-t == 0){
            break;
        }
        if(b-t == 0){
            break;
        }
        t++;
        cnt++;
    }

    if(cnt%2 == 1){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }

    return 0;
}