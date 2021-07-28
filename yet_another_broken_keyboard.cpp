#include<bits/stdc++.h>

#define NONE 2
#define BROKEN 1
#define AVAILABLE 0

using namespace std;

int main(){
    int n, k;
    string s;
    cin>>n>>k>>s;
    char c[k];
    for( int i = 0; i < k; i++ ){
        cin>>c[i];
    }

    int part = 0;
    unsigned long long int len[n/2+1];
    len[part] = 0;
    int prev_found = 0;
    int found;

    for( int i = 0; i < n; i++ ){
        found = 0;
        for( int j = 0; j < k; j++ ){
            if( s[i] == c[j] ){
                found = 1;
                break;
            }
        }

        if( found == 0 ){
            if( prev_found == 1 ){
                part++;
                len[part] = 0;
            }
        }
        else
            len[part]++;

        prev_found = found;
    }

    if( found == 1 ){
        part++;
    }

    unsigned long long int sub_s = 0;
    for( int i = 0; i < part; i++ ){
        sub_s += ( len[i] * (len[i]+1) )/2;
    }
    cout<<sub_s;

    return 0;
}
