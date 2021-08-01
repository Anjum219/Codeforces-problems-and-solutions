#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;

    string s, t;

    for( int i = 0; i < T; i++ ){
        cin>>t;

        s = "";
        int prev;
        int all_1 = 0;
        int all_0 = 0;

        if( t[0] == '1' ){
            prev = 1;
            s += '1';
            all_1 = 1;
        }
        else{
            prev = 0;
            s += '0';
            all_0 = 1;
        }

        for( int j = 1; j < t.length(); j++ ){
            if( t[j] == '0' ){
                if( prev == 0 ){
                    s += "10";
                }
                else{
                    s += '0';
                }
                all_1 = 0;
                prev = 0;
            }
            else{
                if( prev == 1 ){
                    s += "01";
                }
                else{
                    s += '1';
                }
                all_0 = 0;
                prev = 1;
            }
        }

        if( all_1 == 1 || all_0 == 1 )
            s = t;

        cout<<s<<endl;
    }

    return 0;
}
