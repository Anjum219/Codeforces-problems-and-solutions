#include<bits/stdc++.h>
#define LL unsigned long long int

using namespace std;

vector<pair<int, int> > sorted_with_index( int a[], int n ){
    vector<pair<int, int> > v;

    for( int i = 0; i < n; i++ ){
        v.push_back(make_pair(a[i], i));
    }

    sort(v.begin(), v.end());
    vector<pair<int, int> > v2;

    for( int i = n-1; i >= 0; i-- ){
        v2.push_back(make_pair(v[i].first, v[i].second));
    }

    return v2;
}

int main(){
    int t;
    cin>>t;

    while( t-- ){
        int n;
        cin>>n;
        int a[n+1];
        a[0] = 1000001;
        
        for( int i = 1; i < n+1; i++ ){
            cin>>a[i];
        }

        vector<pair<int, int> > buildings = sorted_with_index(a, n+1);
        LL T = 0;
        LL distance = 1;

        for( int i = 1; i < n; i+=2 ){
            T += (buildings[i].first + buildings[i+1].first) * distance;
            distance++;
        }
        if( n%2 == 1 ) T += buildings[n].first * distance;
        T = 2 * T;

        cout<<T<<endl;

        int coordinate[n+1];
        coordinate[0] = 0;

        for( int i = 1; i < n+1; i++ ){
            coordinate[buildings[i].second] = pow(-1, i) * ((i+1)/2);
        }

        for( int i = 0; i < n+1; i++ ){
            cout<<coordinate[i]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
