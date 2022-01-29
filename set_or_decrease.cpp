#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n;
        LL k;
        cin>>n>>k;
        int a[n];

        for( int i = 0; i < n; i++ ){
            cin>>a[i];
        }

        sort(a, a+n);

        LL cumulative_sum[n];
        cumulative_sum[0] = a[0];
        for( int i = 1; i < n; i++ ){
            cumulative_sum[i] = cumulative_sum[i-1] + a[i];
        }

        LL x;
        LL min_x = pow(10, 18);

        for( int i = 0; i < n; i++ ){
            LL sum = k - cumulative_sum[n-i-1] + a[0];
            LL mul = 1;
            if( sum < 0 ){
                mul = -1;
                sum = sum * mul;
            }
            x = a[0] - mul*(sum/(i+1));
            min_x = min(min_x, i + max(0LL, x));
        }

        cout<<min_x<<endl;
    }

    return 0;
}
