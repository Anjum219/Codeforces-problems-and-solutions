#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    for( int i = 0; i < t; i++ ){
        string s;
        cin>>s;

        int l = s.length();
        map< pair<int, int>, int> lat;
        map< pair<int, int>, int> lon;

        int u = l;
        int v = l;
        int time = 0;

        for( int j = 0; j < l; j++ ){
            if( s[j] == 'E' ){
                if( lat[{u,v}] == 1 ){
                    time++;
                }
                else{
                    lat[{u,v}] = 1;
                    time += 5;
                }
                u++;
            }
            else if( s[j] == 'W' ){
                u--;
                if( lat[{u,v}] == 1 ){
                    time++;
                }
                else{
                    lat[{u,v}] = 1;
                    time += 5;
                }
            }
            else if( s[j] == 'N' ){
                if( lon[{u,v}] == 1 ){
                    time++;
                }
                else{
                    lon[{u,v}] = 1;
                    time += 5;
                }
                v++;
            }
            else if( s[j] == 'S' ){
                v--;
                if( lon[{u,v}] == 1 ){
                    time++;
                }
                else{
                    lon[{u,v}] = 1;
                    time += 5;
                }
            }
        }

        cout<<time<<endl;
    }

    return 0;
}
