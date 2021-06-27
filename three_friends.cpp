#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int q;
    cin>>q;

    while( q-- ){
        int a, b, c;
        cin>>a>>b>>c;

        int dist = abs(a-b) + abs(b-c) + abs(c-a);  // initial pairwise distance
        dist = max(0, dist-4);  // after moving, this distance always decreases by 4 or 0

        cout<<dist<<endl;
    }

    return 0;
}
