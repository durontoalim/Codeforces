#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int N,X;
    cin>>N;

    bool count = false;

    while(N--){
        cin>>X;
        if(X == 1){
            count = true;
        }
    }

    if(count == true){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
    
    
    return 0;
}