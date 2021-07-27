#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n;
        cin>>n;
        int q[n], p[n];

        for( int j = 0; j < n; j++ ){
            cin>>q[j];
        }

        int lef[n];
        int l_index = 0;
        int fil = 0;

        int prev = q[0];
        if( prev > 1 ){
            int diff = prev-1;
            for( int k = 0; k < diff; k++ ){
                lef[l_index] = k+1;
                l_index++;
            }
        }

        p[0] = prev;
        int curr;
        int possible = 1;

        for( int j = 1; j < n; j++ ){
            curr = q[j];
            if( curr < prev || curr < (j+1) ){
                possible = -1;
                break;
            }
            else if( curr > prev+1 ){
                int diff = curr-prev-1;
                for( int k = 0; k < diff; k++ ){
                    lef[l_index] = prev+k+1;
                    l_index++;
                }
                p[j] = curr;
            }
            else if( curr == prev ){
                p[j] = lef[fil];
                fil++;
            }
            else{
                p[j] = curr;
            }
            prev = curr;
        }

        if( possible == 1 ){
            for( int j = 0; j < n; j++ ){
                cout<<p[j]<<' ';
            }
        }
        else{
            cout<<possible;
        }
        cout<<endl;
    }

    return 0;
}
