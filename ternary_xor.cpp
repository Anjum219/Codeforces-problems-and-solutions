#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n;
        string x, a, b;
        cin>>n;
        cin>>x;
        a = x;
        b = x;

        int j = 0;
        for( j = 0; j < n; j++ ){
            if( x[j] == '2' ){
                a[j] = '1';
                b[j] = '1';
            }
            else if( x[j] == '1' ){
                b[j] = '0';
                break;
            }
        }

        j++;
        while( j < n ){
            a[j] = '0';
            j++;
        }

        cout<<a<<endl;
        cout<<b<<endl;
    }

    return 0;
}
