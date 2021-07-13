#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int a, b, c, d;
        int x, y, x1, y1, x2, y2;
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;

        int lr = 0;
        int du = 0;

        if( (a > b) && (a-b <= abs(x-x1)) )
            lr = 1;
        else if( (a < b) && (b-a <= abs(x2-x)) )
            lr = 1;
        else if( (a == b) && (a == 0 || abs(x2-x1) > 0) )
            lr = 1;

        if( (c > d) && (c-d <= abs(y-y1)) )
            du = 1;
        else if( (c < d) && (d-c <= abs(y2-y)) )
            du = 1;
        else if( (c == d) && (c == 0 || abs(y2-y1) > 0) )
            du = 1;

        if( lr == 1 && du == 1 )
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
