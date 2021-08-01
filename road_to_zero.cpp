#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    unsigned long long int x, y, a, b, dollar, diff, small, big;

    for( int i = 0; i < t; i++ ){
        cin>>x>>y;
        cin>>a>>b;

        if( x < y ){
            if( a*2 < b ){
                dollar = (x + y)*a;
            }
            else{
                dollar = x*b;
                dollar += a*(y - x);
            }
        }
        else if( y < x ){
            if( a*2 < b ){
                dollar = (x + y)*a;
            }
            else{
                dollar = y*b;
                dollar += a*(x - y);
            }
        }
        else{
            if( a*2 < b ){
                dollar = (x + y)*a;
            }
            else{
                dollar = x*b;
            }
        }

        cout<<dollar<<endl;
    }

    return 0;
}
