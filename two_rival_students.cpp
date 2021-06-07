#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n, x, a, b;
        cin>>n>>x>>a>>b;

        int max_dist = abs(a-b);
        max_dist = min(n-1, max_dist+x);
        cout<<max_dist<<endl;
    }

    return 0;
}
