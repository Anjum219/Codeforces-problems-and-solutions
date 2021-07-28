#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int n, k, m, left_par, right_par;
    cin>>s;
    n = s.length();
    int left_pos[n], right_pos[n];

    left_par = 0;
    right_par = 0;
    for( int i = 0; i < n; i++ ){
        if( s[i] == '(' ){
            left_pos[left_par] = i+1;
            left_par++;
        }
        else{
            right_pos[right_par] = i+1;
            right_par++;
        }
    }

    int min_op;
    if( left_par == 0 || right_par == 0 ){
        min_op = 0;
    }
    else if( left_par < right_par ){
        min_op = left_par;
        while( left_pos[min_op-1] >= right_pos[right_par-min_op] ){
            min_op--;
            if( min_op == 0 )
                break;
        }
    }
    else{
        min_op = right_par;
        while( right_pos[right_par-min_op] <= left_pos[min_op-1] ){
            min_op--;
            if( min_op == 0 )
                break;
        }
    }

    if( min_op == 0 )
        cout<<min_op<<endl;
    else{
        k = 1;
        m = 2*min_op;
        cout<<k<<endl;
        cout<<m<<endl;
        for( int i = 0; i < min_op; i++ ){
            cout<<left_pos[i]<<' ';
        }
        for( int i = min_op; i > 0; i-- ){
            cout<<right_pos[right_par-i]<<' ';
        }
    }

    return 0;
}
