#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    for( int i = 0; i < t; i++ ){
        int n;
        cin>>n;

        int round_cnt = 0;
        int round_num[5];
        int div = n;
        int rem = 0;

        int j = 1;
        while( div != 0 ){
            rem = div%10;
            div = div/10;

            if( rem != 0 ){
                round_num[round_cnt] = rem*j;
                round_cnt++;
            }

            j = j*10;
        }

        cout<<round_cnt<<endl;
        for( int j = 0; j < round_cnt; j++ ){
            cout<<round_num[j]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
