#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n, way;
        cin>>n;
        int mod = n%2;
        int div = n/2;
        if( mod == 0 )
            way = div-1;
        else
            way = div;
        cout<<way<<endl;
    }

    return 0;
}
