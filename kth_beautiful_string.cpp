#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n, k, prev_m;
        cin>>n>>k;
        string s = "";

        for( int k = 0; k < n; k++ ){
            s += "a";
        }

        int m = 1;
        int j = 1;

        while( m <= k ){
            prev_m = m;
            m += j;
            j++;
        }

        int pos = j;
        s[n-(k-prev_m+1)] = 'b';
        s[n-pos] = 'b';
        cout<<s<<endl;
    }

    return 0;
}
