#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int a, b;
        LL cp, distance;
        cin>>a>>b;

        cp = 0;

        if( a != b ){
            if( a > b )
                distance = a - b;
            else if( a < b )
                distance = b - a;

            if( distance >= 5 ){
                cp = cp + distance/5;
                distance = distance%5;
            }
            if( distance >= 2 ){
                cp = cp + distance/2;
                distance = distance%2;
            }
            if( distance == 1 ){
                cp++;
                distance--;
            }
        }

        cout<<cp<<endl;
    }

    return 0;
}
