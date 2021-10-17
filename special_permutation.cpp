#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n;
        cin>>n;

        if( n < 4 )
            cout<<-1<<endl;
        else if( n == 4 ){
            cout<<3<<' '<<1<<' '<<4<<' '<<2<<endl;
        }
        else{
            int rem = n%5;
            int loop = n - rem;
            cout<<1<<' '<<3<<' '<<5<<' ';
            int odd = 7;
            int even = 2;
            int turn = 0;
            int i;
            for( i = 1; i < loop-3; i++ ){
                if( turn == 0 ){
                    cout<<even<<' ';
                    even += 2;
                }
                else{
                    cout<<odd<<' ';
                    odd += 2;
                }
                if( i%5 == 0 )
                    turn = 1 - turn;
            }

            if( rem == 0 ){
                cout<<loop-1<<' ';
            }
            else if( rem == 1 ){
                cout<<loop-1<<' '<<loop+1<<' ';
            }
            else if( rem == 2 ){
                cout<<loop+1<<' '<<loop-1<<' '<<loop+2<<' ';
            }
            else if( rem == 3 ){
                cout<<loop+1<<' '<<loop+3<<' '<<loop-1<<' '<<loop+2<<' ';
            }
            else if( rem == 4 ){
                cout<<loop+1<<' '<<loop+3<<' '<<loop-1<<' '<<loop+2<<' '<<loop+4<<' ';
            }
            cout<<endl;
        }
    }

    return 0;
}
