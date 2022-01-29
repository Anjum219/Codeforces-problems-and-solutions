#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main () {
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;
        int a[n];
        
        for (int i = 0; i < n; i++) {
            cin>>a[i];
        }

        int same = a[n-1];
        int moves = 0;

        int i = n-2;
        int dec = 1;

        while (i >= 0) {
            for (int j = i; j > i-dec; j--) {
                if (j < 0) {
                    break;
                }

                if (a[j] != same) {
                    moves++;
                    break;
                }
                else{
                    i--;
                    dec++;
                }
            }

            i -= dec;
            dec *= 2;
        }

        cout<<moves<<endl;
    }

    return 0;
}
