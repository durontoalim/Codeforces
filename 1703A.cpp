#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int N;
    cin>>N;
    cin.ignore();

    while(N--){
        string str;
        cin>>str;
        if(str == "YES" || str == "yES" || str == "YeS" || str == "yeS" || str == "YEs" || str == "yEs" || str == "Yes" || str == "yes"  ){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
 
    return 0;
}