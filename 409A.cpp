#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main ()
{
    int c=0,i=0,y=0,x=0;

    string a,b;
    cin>>a>>b;

    c=b.size();

    for (i=0;i<c;i+=2)
    {
        if ((a[i]=='[' && b[i]=='(') || (a[i]=='(' && b[i]=='8') || (a[i]=='8' && b[i]=='[')){x++;}
        else if (a[i]!=b[i]){y++;}
    }
    
    if (x>y)cout<<"TEAM 1 WINS"<<endl;
    else if (x<y)cout<<"TEAM 2 WINS"<<endl;
    else cout<<"TIE"<<endl;

    return 0;
}