// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// template < typename F, typename S >
// ostream& operator << ( ostream& os, const pair< F, S > & p ) {
//             return os << "(" << p.first << ", " << p.second << ")";
// }
 
// template < typename T >
// ostream &operator << ( ostream & os, const vector< T > &v ) {
//             os << "{";
//                 for(auto it = v.begin(); it != v.end(); ++it) {
//                                 if( it != v.begin() ) os << ", ";
//                                         os << *it;
//                                             }
//                     return os << "}";
// }
 
// template < typename T >
// ostream &operator << ( ostream & os, const set< T > &v ) {
//             os << "[";
//                 for(auto it = v.begin(); it != v.end(); ++it) {
//                                 if( it != v.begin() ) os << ", ";
//                                         os << *it;
//                                             }
//                     return os << "]";
// }
 
// template < typename T >
// ostream &operator << ( ostream & os, const multiset< T > &v ) {
//             os << "[";
//                 for(auto it = v.begin(); it != v.end(); ++it) {
//                                 if( it != v.begin() ) os << ", ";
//                                         os << *it;
//                                             }
//                     return os << "]";
// }
 
// template < typename F, typename S >
// ostream &operator << ( ostream & os, const map< F, S > &v ) {
//             os << "[";
//                 for(auto it = v.begin(); it != v.end(); ++it) {
//                                 if( it != v.begin() ) os << ", ";
//                                         os << it -> first << " = " << it -> second ;
//                                             }
//                     return os << "]";
// }
 
// #define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
 
// void faltu () {
//             cerr << endl;
// }
 
// template <typename T>
// void faltu( T a[], int n ) {
//             for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
//                 cerr << endl;
// }
 
// template <typename T, typename ... hello>
// void faltu( T arg, const hello &... rest) {
//             cerr << arg << ' ';
//                 faltu(rest...);
// }



// int hello(int arr[],int index, int x, int n){
//     if(index >= n) return 0;
//     int a=0, b = 0;
//     if(arr[index] != x+1){
//         a = arr[index] + hello(arr,index+1,arr[index],n);
//     }
//     b = 0 + hello(arr,index+1,x,n);

//     return max(a,b);
// }
// int32_t main()
// {
//     FastIO();
//     int t; cin>>t;
//     int arr[t+1];
//     for (int i = 0; i < t; i++)
//     {
//         cin>>arr[i];
//     }
//     sort(arr,arr+t);

//     dbg(arr,t);

//     cout<<hello(arr,0,-5,t)<<endl;
    
    

//     return 0;
// }