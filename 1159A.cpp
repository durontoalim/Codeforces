#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; cin>>N;
    string str; cin>>str;

    int result = 0;

    for (int i = 0; i < N; i++)
    {
        if(str[i] == '+'){
            result++;
        }
        else{
            result--;
        }

        if(result < 0){
            result = 0;
        }
    }
    

    return 0;
}