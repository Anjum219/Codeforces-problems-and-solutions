#include<bits/stdc++.h>

using namespace std;

int find_x( int n ){
    int x;
    int sum = 3;

    int k = 4;
    while( n%sum != 0 ){
        sum += k;
        k = k*2;
    }
    x = n/sum;

    return x;
}

int main(){
    int t, n, x;
    cin>>t;

    while( t-- ){
        cin>>n;
        x = find_x(n);
        cout<<x<<endl;
    }

    return 0;
}
