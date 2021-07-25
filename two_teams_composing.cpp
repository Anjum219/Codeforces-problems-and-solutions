#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n, x;
        cin>>n;
        int a[n];
        for( int j = 0; j < n; j++ ){
            a[j] = 0;
        }

        int skill;
        for( int j = 0; j < n; j++ ){
            cin>>skill;
            a[skill-1]++;
        }

        int eql = 0;
        int dist = 0;
        for( int j = 0; j < n; j++ ){
            if( a[j] != 0 )
                dist++;
            if( a[j] > eql )
                eql = a[j];
        }

        if( eql < dist )
            x = eql;
        else if( eql > dist )
            x = dist;
        else
            x = eql - 1;

        if( n/2 < x )
            x = n/2;

        cout<<x<<'\n';
    }

    return 0;
}
