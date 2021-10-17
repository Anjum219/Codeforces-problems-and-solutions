#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    for( int i = 0; i < t; i++ ){
        int n;
        cin>>n;

        int candy[n];
        for( int j = 0; j < n; j++ ){
            cin>>candy[j];
        }

        int ac = candy[0]; //# of candies eaten by Alice in current move
        int bc = 0; //# of candies eaten by Bob   in current move
        int a = ac;
        int b = bc;
        int mov = 1;
        int ap = 1; //position of Alice
        int bp = n-1; //position of Bob
        int turn = 1;

        for( int j = 0 ; j < n; j++ ){
            if( ap > bp )
                break;
            if( turn == 1 ){
                bc = candy[bp];
                bp--;
                while( bc <= ac && bp >= ap ){
                    bc += candy[bp];
                    bp--;
                }
                //cout<<bc<<' ';
                b += bc;
                turn = 0;
            }
            else{
                ac = candy[ap];
                ap++;
                while( ac <= bc && ap <= bp ){
                    ac += candy[ap];
                    ap++;
                }
                //cout<<ac<<' ';
                a += ac;
                turn = 1;
            }

            mov++;
        }
        cout<<mov<<' '<<a<<' '<<b<<endl;
    }

    return 0;
}
