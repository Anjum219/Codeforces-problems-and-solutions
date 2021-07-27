#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n, year;
        cin>>n;

        year = 0;
        int digit = 1;
        int div = n/10;
        int rem = n%10;
        while( div > 0 ){
            year += 9;
            rem = div%10;
            div = div/10;
            digit++;
        }
        year += rem;

        int beauty = rem;
        for( int i = 1; i < digit; i++ ){
            beauty = beauty*10 + rem;
        }

        if( n < beauty )
            year--;

        cout<<year<<endl;
    }

    return 0;
}
