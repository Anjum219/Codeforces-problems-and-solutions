#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    for( int i = 0; i < t; i++ ){
        unsigned long long int n, k;
        cin>>n>>k;
        if( n > k )
            cout<<k<<endl;
        else if( n == k )
            cout<<k+1<<endl;
        else{
            unsigned int long long kth = (k*n)/(n-1);
            if( kth%n == 0 )
                kth--;
            cout<<kth<<endl;
        }
    }

    return 0;
}
