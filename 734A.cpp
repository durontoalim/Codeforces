#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    char str;
    int t=0,d=0;


    for (int i = 0; i < N; i++)
    {
        cin>>str;

        if(str == 'A'){
            t++;
        }
        if(str == 'D'){
            d++;
        }
    }

    if(t>d){
        cout<<"Anton\n";
    }
    else if(d>t){
        cout<<"Danik\n";
    }
    else{
        cout<<"Friendship\n";
    }
    
    return 0;
}