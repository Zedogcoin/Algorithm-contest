/*CF 754B: Ilya and tic-tac-toe game — 1100*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int flag = 0;
    vector <vector<char>> board(4,vector<char>(4));
    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 4;j++){
            cin >> board[i][j];
        }
    }
    for(int row = 0;row <= 1;row++){
        for(int col = 0;col <= 3;col++){
            int unplaced = 0,placed_x = 0;
            for(int l = 0;l <= 2;l++){
                if(board[row + l][col] == '.'){
                  unplaced++;
                }
                else if(board[row + l][col] == 'x'){
                placed_x++;
                }
            }
            if(unplaced == 1 && placed_x == 2){
                flag = 1;
            }
        }
    }
    for(int col = 0;col <= 1;col++){
        for(int row = 0;row <= 3;row++){
            int unplaced = 0,placed_x = 0;
            for(int l = 0;l <= 2;l++){
                if(board[row][col + l] == '.'){
                  unplaced++;
                }
                else if(board[row][col + l] == 'x'){
                placed_x++;
                }
            }
            if(unplaced == 1 && placed_x == 2){
                flag = 1;
            }
        }
    }
    for(int row = 0;row <= 1;row++){
        for(int col = 0;col <= 1;col++){
            int unplaced = 0,placed_x = 0;
            for(int l = 0;l <= 2;l++){
                if(board[row + l][col + l] == '.'){
                    unplaced++;
                }
                else if(board[row + l][col + l] == 'x'){
                    placed_x++;
                }
            }
           if(unplaced == 1 && placed_x == 2){
                flag = 1;
            }
        }
    }
   for(int row = 0;row <= 1;row++){
        for(int col = 2;col <= 3;col++){
            int unplaced = 0,placed_x = 0;
            for(int l = 0;l <= 2;l++){
                if(board[row + l][col - l] == '.'){
                    unplaced++;
                }
                else if(board[row + l][col - l] == 'x'){
                    placed_x++;
                }
            }
           if(unplaced == 1 && placed_x == 2){
                flag = 1;
            }
        }
    }
    if(flag == 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    return 0;
}