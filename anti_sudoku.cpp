#include<bits/stdc++.h>
#define LL long long int

using namespace std;

int main(){
    int t;
    cin>>t;

    while( t-- ){
        char sudoku[9][9];
        for( int j = 0; j < 9; j++ ){
            for( int k = 0; k < 9; k ++ ){
                cin>>sudoku[j][k];
            }
        }

        sudoku[0][0] = sudoku[0][1];
        sudoku[1][3] = sudoku[1][4];
        sudoku[2][6] = sudoku[2][7];
        sudoku[3][1] = sudoku[3][2];
        sudoku[4][4] = sudoku[4][5];
        sudoku[5][7] = sudoku[5][8];
        sudoku[6][2] = sudoku[6][1];
        sudoku[7][5] = sudoku[7][4];
        sudoku[8][8] = sudoku[8][7];

        for( int j = 0; j < 9; j++ ){
            for( int k = 0; k < 9; k ++ ){
                cout<<sudoku[j][k];
            }
            cout<<'\n';
        }
    }

    return 0;
}
