#include <bits/stdc++.h>
using namespace std;
#define N 5

int main()
{
    int arr[N][N];
    int index_i, index_j;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 1){
                
                index_i = i+1;
                index_j = j+1;

            }
        }
    }
    int result = abs(index_i - 3) + abs(index_j - 3);
    cout<<result<<endl;

    return 0;
}