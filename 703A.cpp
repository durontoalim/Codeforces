#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int count = 0;
    while (N--)
    {
        int a,b;
        cin>>a>>b;

        if(a> b) {
            count++;
        }
        else if(a<b){
            count--;
        }
    }

    if(count == 0){
        cout<<"Friendship is magic!^^\n";
    }
    else if(count > 0){
        cout<<"Mishka\n";
    }
    else cout<<"Chris\n";
    

    return 0;


    
}