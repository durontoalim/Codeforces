#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,t, str;

    getline(cin,s);
    getline(cin,t);

    int len = t.size();

    for (int i = len-1; i >= 0; i--)
    {
        str.push_back(t[i]);
    }
    
    if(s == str){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    

    return 0;
}