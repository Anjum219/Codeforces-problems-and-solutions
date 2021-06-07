#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n, m;
        cin>>n>>m;
        int w[n];
        for( int j = 0; j < n; j++ ){
            cin>>w[j];
        }

        if( m < n || m == 2 ){
            cout<<-1<<endl;
        }
        else{
            int c = 0;
            for( int j = 0; j < n-1; j++ ){
                c += w[j] + w[j+1];
            }
            c += w[0] + w[n-1];

            cout<<c<<endl;
            for( int j = 0; j < m-1; j++ ){
                cout<<j+1<<' '<<j+2<<endl;
            }
            cout<<m<<' '<<1<<endl;
        }
    }

    return 0;
}
