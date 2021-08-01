#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n, a, b, c, d, bag_min_wt, bag_max_wt, grn_min_wt, grn_max_wt;
    cin>>t;

    for( int i = 0; i < t; i++ ){
        cin>> n >> a >> b >> c >> d;
        bag_min_wt = c - d;
        bag_max_wt = c + d;
        grn_min_wt = (a - b)*n;
        grn_max_wt = (a + b)*n;

        if( ( grn_min_wt <= bag_min_wt && bag_min_wt <= grn_max_wt ) || ( grn_min_wt <= bag_max_wt && bag_max_wt <= grn_max_wt ) )
            cout<<"Yes"<<endl;
        else if( ( bag_min_wt <= grn_min_wt && grn_min_wt <= bag_max_wt ) || ( bag_min_wt <= grn_max_wt && grn_max_wt <= bag_max_wt ) )
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
