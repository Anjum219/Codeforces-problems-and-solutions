#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n, a, b;
        cin>>n>>a>>b;

        string s = "";
        for( int j = 0; j < n; j++ ){
            int mod = j%b;
            char letter = 'a' + mod;
            s += letter;
        }

        cout<<s<<endl;
    }

    return 0;
}
