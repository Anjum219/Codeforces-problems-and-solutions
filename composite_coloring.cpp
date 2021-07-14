#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n, a, used[11][2], total;;
        cin>>n;

        int color[n];
        total = 0;
        //int nums[11];
        int num [] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

        for( int j = 0; j < 11; j++ ){
            used[j][0] = 0;
        }

        for( int i = 0; i < n; i++ ){
            cin>>a;

            for( int j = 0; j < 11; j++ ){
                if( a%num[j] == 0 ){
                    if( used[j][0] == 0 ){
                        total++;
                        used[j][0] = 1;
                        used[j][1] = total;
                    }
                    color[i] = used[j][1];
                }
            }
        }

        cout<<total<<endl;
        for( int k = 0; k < n; k++ ){
            cout<<color[k]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
