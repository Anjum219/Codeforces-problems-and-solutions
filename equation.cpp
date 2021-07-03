#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    cin>>n;

    if( n == 1 ){
        a = 15;
        b = 14;
    }
    else{
        a = 3 * n;
        b = 2 * n;
    }

    cout<<a<<' '<<b;

    return 0;
}
