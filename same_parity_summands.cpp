#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    for( int i = 0; i < t; i++ ){
        int n, k;
        cin>>n>>k;

        string possible = "YES";
        int summand[k];

        if( k > n ){
            possible = "NO";
        }
        else{
            if( n%2 == 1 ){  //n is odd
                if( k%2 == 1 ){  //k is odd
                    for( int j = 0; j < k-1; j++ ){
                        summand[j] = 1;
                    }
                    summand[k-1] = n-k+1;
                }
                else{  //k is even
                    possible = "NO";
                }
            }

            else{  //n is even
                if( k%2 == 1 ){  //k is odd
                    if( n/2 >= k ){
                        for( int j = 0; j < k-1; j++ ){
                            summand[j] = 2;
                        }
                        summand[k-1] = n-2*k+2;
                    }
                    else{
                        possible = "NO";
                    }
                }
                else{  //k is even
                    for( int j = 0; j < k-1; j++ ){
                        summand[j] = 1;
                    }
                    summand[k-1] = n-k+1;
                }
            }
        }

        if( possible == "YES" ){
            cout<<"YES"<<endl;
            for( int j = 0; j < k; j++ ){
                cout<<summand[j]<<' ';
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
