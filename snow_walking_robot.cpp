#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int q;
    cin>>q;

    while( q-- ){
        string s;
        cin>>s;

        int len = s.length();
        int l = 0, r = 0, u = 0, d = 0;

        for( int j = 0; j < len; j++ ){
            char ch = s[j];
            switch(ch){
                case 'L' : l++;
                    break;
                case 'R' : r++;
                    break;
                case 'U' : u++;
                    break;
                case 'D' : d++;
                    break;
                default :
                    break;
            }
        }

        int min_lr = min(l, r);
        int min_ud = min(u, d);

        int max_ins;
        string t;
        if( min_lr == 0 && min_ud == 0 ){
            max_ins = 0;
            t = "";
        }
        else if( min_lr == 0 ){
            max_ins = 2;
            t = "UD";
        }
        else if( min_ud == 0 ){
            max_ins = 2;
            t = "LR";
        }
        else{
            max_ins = 2 * ( min_lr + min_ud );
            t = "";
            for( int k = 0; k < min_lr; k++ )
                t+= "L";
            for( int k = 0; k < min_ud; k++ )
                t+= "U";
            for( int k = 0; k < min_lr; k++ )
                t+= "R";
            for( int k = 0; k < min_ud; k++ )
                t+= "D";
        }

        cout<<max_ins<<endl;
        cout<<t<<endl;
    }

    return 0;
}
