#include <bits/stdc++.h>
using namespace std;

bool is_valid(int row , int col , vector <int> queens){
    pass
}

int place_queens(int row,vector <int> queens,int n){
    if(row==n){
        return 1;
    }

    else{
        int total_sol = 0;
        for( int col =0;col<n;col++){
            if(is_valid(row,col,queens)){
                queens[row]=col;
            }
        }
    }
}


int main(){

}