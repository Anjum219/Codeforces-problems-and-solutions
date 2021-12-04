#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n, l, r, k;
        cin>>n>>l>>r>>k;
        int a[n];
        
        for( int i = 0; i < n; i++ ){
            cin>>a[i];
        }

        sort(a, a+n);

        LL spent = 0;
        int chocolates = 0;

        for( int i = 0; i < n; i++ ){
            if( a[i] < l ){
                continue;
            }
            else if( a[i] > r ){
                break;
            }
            else if( spent + a[i] > k ){
                break;
            }
            else{
                spent += a[i];
                chocolates++;
            }
        }

        cout<<chocolates<<endl;
    }

    return 0;
}
