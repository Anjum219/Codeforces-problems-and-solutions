#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n, half;
    cin>>t;

    while( t-- ){
        cin>>n;
        half = n/2;

        if( half%2 == 0 ){
            cout<<"YES"<<endl;
            for( int i = 1; i <= half; i++ ){
                cout<<i*2<<' ';
            }

            int j;
            for( j = 1; j < half; j++ ){
                cout<<(j*2)-1<<' ';
            }
            cout<<((j*2)-1)+half<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
