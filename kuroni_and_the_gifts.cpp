#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n;
        cin>>n;
        int a[n], b[n];

        for( int j = 0; j < n; j++ ){
            cin>>a[j];
        }
        for( int j = 0; j < n; j++ ){
            cin>>b[j];
        }

        sort(a, a+n);
        sort(b, b+n);

        for( int j = 0; j < n; j++ ){
            cout<<a[j]<<" ";
        }
        cout<<endl;
        for( int j = 0; j < n; j++ ){
            cout<<b[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
