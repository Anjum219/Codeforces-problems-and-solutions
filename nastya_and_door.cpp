#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n, k;
    cin>>t;

    for( int i = 0; i < t; i++ ){
        cin>>n>>k;
        int a[n];

        for( int j = 0; j < n; j++ ){
            cin>>a[j];
        }

        int peek[n];
        for( int j = 1; j < n-1; j++ ){
            if( a[j-1] < a[j] && a[j] > a[j+1] )
                peek[j] = 1;
            else
                peek[j] = 0;
        }

        int segment = n-k+1;
        int seg[segment];
        seg[0] = 0;
        for( int p = 1; p < k-1; p++ ){
            seg[0] += peek[p];
        }
        int l = 1;
        int max_peek = seg[0];

        for( int j = 1; j < segment; j++ ){
            seg[j] = seg[j-1] - peek[j] + peek[j+k-2];
            if( seg[j] > max_peek ){
                max_peek = seg[j];
                l = j+1;
            }
        }

        cout<<max_peek+1<<' '<<l<<endl;
    }

    return 0;
}
