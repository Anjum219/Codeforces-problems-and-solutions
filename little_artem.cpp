#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n, m;
        cin>>n>>m;
        for( int j = 0; j < n; j++ ){
            for( int k = 0; k < m; k++ ){
                if( j == n-1 && k == m-1 )
                    cout<<'W';
                else
                    cout<<'B';
            }
            cout<<endl;
        }
    }

    return 0;
}
