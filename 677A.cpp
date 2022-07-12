#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,h;
    double a,sum;
    int result=0;

    cin>>N>>h;

    for (int i = 0; i < N; i++)
    {
        cin>>a;

        sum = a/h;

        result += ceil(sum);

    }

    cout<<result<<endl;
    

    return 0;
}