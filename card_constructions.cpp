#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n, pyramid;
    int long long card, prev_card;
    cin>>t;

    for( int i = 0; i < t; i++ ){
        cin>>n;

        pyramid = 0;
        while( n >= 2 ){
            int long long j = 1;
            prev_card = 0;
            card = 2;

            while( card <= n ){
                prev_card = card;
                j++;
                card = (j*( 3*j + 1 ))/2;
            }
            n = n - prev_card;

            if( j > 1 )
                pyramid++;
        }

        cout<<pyramid<<endl;
    }

    return 0;
}
