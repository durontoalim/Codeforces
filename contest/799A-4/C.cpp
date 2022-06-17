#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch[9][9];

    int N;

    cin>>N;
    
    while(N--){

        //input
        for(int i = 1; i< 9 ; i++ ){
            for(int j =1; j< 9 ; j++){
                cin>>ch[i][j];
            }
        }

        for(int i = 1; i< 9 ; i++ ){
            for(int j =1; j< 9 ; j++){
                if(ch[i][j] == '#' && ch[i+1][j+1] == '#' && ch[i][j+2] == '#'){
                    cout<<i+1<<" "<<j+1<<endl;
                    break;
                }
            }
        }

    }

    return 0;
}