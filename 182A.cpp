#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{

    int N,X=0;
    string str;

    cin>>N;

    while(N--){

        cin>>str;

        if(str == "X++"){
            X = X+1;
        }
        else if(str == "X--"){
            X = X-1;
        }
        else if(str == "--X"){
            X = X-1;
        }
        else if(str == "++X"){
            X = X+1;
        }
    }
    cout<<X<<endl;

    return 0;
}