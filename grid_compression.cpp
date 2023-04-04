#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W; //H:縦のマス目、W:横のマス目
    cin >> H >> W;

    // 行列a(i,j)の配列を定義
    vector <vector<char>> board(H, vector<char>(W));

    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            cin >> board.at(i).at(j);
        }
    }

    // for (int i = 0; i < H - 1; i++){
    //     if (board.at(i) == board.at(i - 1)){
    //         cout << "";
    //     }
    // }

    // for (int i = 0; i < H - 1; i++){
    //     for (int j = 0; j < W - 1; j++){
    //         if (board.at(i).at(j) == board.at(i + 1).at(j)){
    //             cout << " ";
    //         }
    //         if (board.at(i).at(j) == board.at(i).at(j - 1)){
    //             cout << " ";
    //         }
    //     } 
    // }
}