#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n, l, r;
        int left, right, segment;

        cin>>n;

        left = 1;
        right = pow(10,9);

        for( int j = 0; j < n; j++ ){
            cin>>l>>r;

            if( l > left )
                left = l;
            if( r < right )
                right = r;
        }

        segment = left - right;
        segment = max(0, segment);
        cout<<segment<<endl;
    }

    return 0;
}
