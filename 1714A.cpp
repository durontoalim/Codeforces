#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    cin>>N;

    while (N--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int hh,mm,hour,min;
        int temp_hour= 24, temp_min=60;

        while (a--)
        {
            
            cin>>hh>>mm;

            if( (hh > b && mm > c) || ( hh == b && mm == c ) || ( hh == b && mm > c ) || (hh > b && mm == c) ){
                hour = hh-b;
                min = mm - c;
            }
            else if(hh == b && mm < c){
                hh += 23;
                hour = hh - b;

                mm += 60;

                min = mm - c;

            }
            else if(hh > b && mm < c){
                mm += 60;
                hh -= 1;
                hour = hh - b;
                min = mm - c;
            }
            else if( ( hh < b && ( mm > c || mm == c ) ) ){
                hh += 24;
                hour = hh - b;
                min = mm - c;
            }
            else if(hh < b && mm < c){
                hh += 23;
                hour = hh - b;
                mm += 60;
                min = mm - c;
            }
            else if(hh < b && mm == c){
                hh += 23;
                hour = hh - b;
                min = mm - c;
            }
            
            if(temp_hour > hour){
                temp_hour = hour;
                temp_min = min;
            }
            else if(temp_hour == hour && temp_min > min){
                temp_hour = hour;
                temp_min = min;
            }

            
        }

        cout<<temp_hour<<" "<<temp_min<<endl;
        
    }
    

    return 0;
}