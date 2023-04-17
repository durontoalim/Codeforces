#include <bits/stdc++.h>
using namespace std;

vector<int>v(1005,0);

int main()
{
    int n; cin>>n;
    int arr2[1000+5]={};

    arr2[1] = 1;
    arr2[2] = 1;
    for (int i = 3; i <= 16; i++)
    {
        arr2[i] = arr2[i-1] + arr2[i-2];
    }

    for(int i = 1; i<1001; i++){
       v[arr2[i]] = 1;
    }

    for (int i = 1; i < n+1; i++)
    {
        if(v[i] == 1) cout<<'O';
        else cout<<'o';
    }

    cout<<endl;
    

    return 0;
}