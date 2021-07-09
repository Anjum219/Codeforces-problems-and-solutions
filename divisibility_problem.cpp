#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int a, b, d;
        cin>>a>>b;

        if( a < b )
            d = b - a;
        else
            d = (a%b == 0) ? 0 : b - a%b;

        cout<<d<<endl;
    }

    return 0;
}
