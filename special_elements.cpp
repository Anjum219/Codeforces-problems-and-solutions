#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    for( int i = 0; i < t; i++ ){
        int n;
        cin>>n;
        int a[n];

        for( int j = 0; j < n; j++ ){
            cin>>a[j];
        }

        map<int, bool> sum;

        for( int j = 1; j < n; j++ ){
            int add = 0;
            int k;
            for( k = 0; k < j+1; k++ ){
                add += a[k];
            }
            if( add <= n )
                sum[add] = 1;
            for( k = j+1; k < n; k++ ){
                add = add - a[k-j-1] + a[k];
                if( add <= n )
                    sum[add] = 1;
            }
        }

        int special_elements = 0;
        for( int j = 0; j < n; j++ ){
            if( sum[a[j]] == 1 )
                special_elements++;
        }
        cout<<special_elements<<endl;
    }

    return 0;
}

