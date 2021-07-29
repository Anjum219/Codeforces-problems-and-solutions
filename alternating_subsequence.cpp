#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin>>t;

    while( t-- ){
        cin>>n;
        int a[n];
        for( int i = 0; i < n; i++ ){
            cin>>a[i];
        }

        long long int prev, present, sum;
        prev = a[0];
        sum = 0;

        for( int i = 1; i < n; i++ ){
            present = a[i];
            if( present > 0 ){
                if( prev < 0 ){
                    sum += prev;
                    prev = present;
                }
                else if( prev < present ){
                    prev = present;
                }
            }
            else{
                if( prev > 0 ){
                    sum += prev;
                    prev = present;
                }
                else if( prev < present  ){
                    prev = present;
                }
            }
        }

        sum += prev;
        cout<<sum<<endl;
    }

    return 0;
}
