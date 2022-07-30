#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector < int> v;

    v.push_back(1);
    v.push_back(2);

    for (int i = 3; i < 1e4; i++)
    {
        if( i%3 == 0 || i%10 == 3){
            continue;
        }

        v.push_back(i);
    }
    

    int N;
    cin>>N;
    while (N--)
    {
       int n;
       cin>>n;

       cout<<v[n-1]<<endl;
    }
    

    return 0;
}