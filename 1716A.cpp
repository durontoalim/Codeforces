#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while(N--){
        int n;
        cin>> n;

        if(n == 1){
            cout<<"2"<<endl;
        }
        else if(n == 2){
            cout<<"1"<<endl;
        }
        else if(n%3 == 0){
            cout<<n/3<<endl;
        }
        else if(n%3 == 1){
            int ch = n-4;
            int result = ch/3;
            cout<<result+2<<endl;
        }
        else if(n%3 == 2){
            cout<<(n/3)+1<<endl;
        }
    }

    return 0;
}