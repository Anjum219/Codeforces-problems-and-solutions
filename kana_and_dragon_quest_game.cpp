#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int absorption( int h ){
    return (h/2 + 10);
}

int lightning( int h ){
    return (h-10);
}

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int x, n, m;
        cin>>x>>n>>m;
        int h = x;

        while( h > 20 && n > 0 ){
            h = absorption(h);
            n--;
        }
        while( h > 0 && m > 0 ){
            h = lightning(h);
            m--;
        }

        if( h <= 0 )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
