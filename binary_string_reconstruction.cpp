#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        string s;
        int x;
        cin>>s;
        cin>>x;
        int n = s.length();

        string w = "";
        for( int i = 0; i < n; i++ ){
            w += '0';
        }

        int pos = 1;
        for( int i = 0; i < n; i++ ){
            if( i >= x && i+x < n ){
                if( s[i-x] != s[i+x] ){
                    pos = 0;
                    break;
                }
                else{
                    w[i] = s[i-x];
                }
            }
            else if( i >= x ){
                w[i] = s[i-x];
            }
            else if( i+x < n ){
                w[i] = s[i+x];
            }
            else{
                w[i] = '0';
            }
        }

        if( pos == 0 ){
            cout<<-1<<endl;
        }
        else{
            cout<<w<<endl;
        }
    }

    return 0;
}
