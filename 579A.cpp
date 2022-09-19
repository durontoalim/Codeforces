#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,t = 0;
    cin>>N;

    while (N > 0)
    {
        if(N % 2 == 1){
            N--;
            t++;
        }
        else{
            N /= 2;
        }
    }
    

    return 0;
}