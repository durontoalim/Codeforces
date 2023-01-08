#include <bits/stdc++.h>

using namespace std;

int main()
{
    double N,M;
    cin>>N>>M;
    int X = floor(N/M);
    int Y = ceil(N/M);
    int Z = round(N/M);
    cout<<"floor "<<N<<" / "<<M<<" = "<<X<<endl;
    cout<<"ceil "<<N<<" / "<<M<<" = "<<Y<<endl;
    cout<<"round "<<N<<" / "<<M<<" = "<<Z<<endl;

    return 0;
}