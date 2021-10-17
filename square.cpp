#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, a1, b1, a2, b2;
    cin>>t;

    for( int i = 0; i < t; i++ ){
        cin>>a1>>b1;
        cin>>a2>>b2;

        int l1, w1, l2, w2;

        if( a1 > b1 ){
            l1 = a1;
            w1 = b1;
        }
        else{
            l1 = b1;
            w1 = a1;
        }

        if( a2 > b2 ){
            l2 = a2;
            w2 = b2;
        }
        else{
            l2 = b2;
            w2 = a2;
        }

        if( l1 == l2 && w1+w2 == l1 )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
