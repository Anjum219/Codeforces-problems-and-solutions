#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    for( int i = 0; i < t; i++ ){
        int n;
        cin>>n;

        int distinct_mod[n];
        int a[n];
        for( int j = 0; j < n; j++ ){
            distinct_mod[j] = 0;
            cin>>a[j];
        }

        string vacancy = "";

        for( int j = 0; j < n; j++ ){
            int new_k = j + a[j];

            int mod_new_k;
            if( new_k >= 0 ){
                mod_new_k = new_k%n;
            }
            else{
                new_k = -1*new_k;
                mod_new_k = 0;
                if( new_k%n != 0 )
                    mod_new_k = n - new_k%n;
            }

            if( distinct_mod[mod_new_k] == 0 ){
                distinct_mod[mod_new_k]++;
            }
            else{
                vacancy = "NO";
                break;
            }
        }

        if( vacancy == "" )
            vacancy = "YES";

        cout<<vacancy<<endl;


    }

    return 0;
}
