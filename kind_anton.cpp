#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n;
        cin>>n;
        int a[n], b[n];

        for( int j = 0; j < n; j++ ){
            cin>>a[j];
        }
        for( int j = 0; j < n; j++ ){
            cin>>b[j];
        }

        int inc = 0;
        int dec = 0;
        string ans = "YES";

        for( int j = 0; j < n; j++ ){
            if( inc == 1 && dec == 1 ){
                break;
            }
            else if( inc == 1 ){
                if( b[j] < a[j] ){
                    ans = "NO";
                    break;
                }
                if( a[j] == -1 )
                    dec = 1;
            }
            else if( dec == 1 ){
                if( b[j] > a[j] ){
                    ans = "NO";
                    break;
                }
                if( a[j] == 1 )
                    inc = 1;
            }
            else{
                if( a[j] != b[j] ){
                    ans = "NO";
                    break;
                }
                if( a[j] == -1 )
                    dec = 1;
                else if( a[j] == 1 )
                    inc = 1;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
