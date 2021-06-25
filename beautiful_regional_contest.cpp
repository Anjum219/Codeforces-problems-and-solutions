#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n;
        cin>>n;
        int p[n];

        for( int i = 0; i < n; i++ ){
            cin>>p[i];
        }

        int half_n = n/2;
        int problem[half_n];
        int position[half_n];
        int contestant[half_n];
        int count = 0;

        for( int j = half_n-1; j >= 0; j-- ){
            if( p[j] > p[j+1] ){
                problem[count] = p[j];
                position[count] = j;
                count++;
            }
        }

        for( int j = 0; j < count-1; j++ ){
            contestant[j] = position[j] - position[j+1];
        }
        contestant[count-1] = position[count-1] + 1;

        int g = 0, s = 0, b = 0;

        if( count > 2 ){
            g = contestant[count-1];
            int pos_s;

            for( int j = count-2; j >= 0; j-- ){
                s += contestant[j];
                if( s > g ){
                    pos_s = j;
                    break;
                }
            }

            for( int j = pos_s-1; j >= 0; j-- ){
                b += contestant[j];
            }

            if( g >= s || g >= b ){
                g = 0;
                s = 0;
                b = 0;
            }
        }

        cout<<g<<' '<<s<<' '<<b<<endl;
    }

    return 0;
}
