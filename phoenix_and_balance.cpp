#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin>>t;

    for( int i = 0; i < t; i++ ){
        cin>>n;
        int w, sum;
        w = 2;
        sum = 0;

        if( n != 2 ){
            for( int j = 0; j < (n/2)-1; j++ ){
                sum += w;
                w *= 2;
            }
        }

        w = 2*sum + 2;
        cout<<w<<endl;
    }

    return 0;
}
