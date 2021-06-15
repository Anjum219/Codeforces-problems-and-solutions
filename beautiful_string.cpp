#include<bits/stdc++.h>

using namespace std;

string set_s( string s, int pos ){
    int len = s.length();
    if( pos == 0 ){
        if( len == 1 ){
            s[0] = 'a';
        }
        else{
            char next_char = s[pos+1];
            if( next_char == 'a' ){
                s[0] = 'b';
            }
            else{
                s[0] = 'a';
            }
        }
    }
    else if( pos == len-1 ){
        char prev_char = s[pos-1];
        if( prev_char == 'a' )
            s[pos] = 'b';
        else
            s[pos] = 'a';
    }
    else{
        char prev_char = s[pos-1];
        char next_char = s[pos+1];
        if( next_char == '?' ){
            if( prev_char == 'a' )
                s[pos] = 'b';
            else
                s[pos] = 'a';
        }
        else{
            if( prev_char == next_char ){
                if( prev_char == 'a' )
                    //s.replace(pos,1,"b");
                    s[pos] = 'b';
                else
                    s[pos] = 'a';
            }
            else if( prev_char == 'a' && next_char == 'b' )
                s[pos] = 'c';
            else if( prev_char == 'b' && next_char == 'a' )
                s[pos] = 'c';
            else if( prev_char == 'a' && next_char == 'c' )
                s[pos] = 'b';
            else if( prev_char == 'c' && next_char == 'a' )
                s[pos] = 'b';
            else if( prev_char == 'b' && next_char == 'c' )
                s[pos] = 'a';
            else if( prev_char == 'c' && next_char == 'b' )
                s[pos] = 'a';
        }
    }

    return s;
}

int main(){
    int t;

    cin>>t;
    cin.ignore(256, '\n');

    for( int i = 0; i < t; i++ ){
        int valid = 1;
        string s;
        getline(cin, s);

        int len = s.length();

        if( s[0] == '?' ){
            s = set_s(s,0);
        }
        if( len == 1 ){

        }
        else{
            for( int j = 1; j < len; j++ ){
                //beautiful string not possible
                if( s[j] == s[j-1] && s[j] != '?' ){
                    valid = -1;
                    break;
                }
                //handling '?'
                else if( s[j] == '?' ){
                    s = set_s(s,j);
                }
            }
        }

        if( valid == -1 )
            cout<<valid<<endl;
        else
            cout<<s<<endl;
    }

    return 0;
}
