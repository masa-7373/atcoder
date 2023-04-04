#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<char>> board(N, vector<char>(N, '-'));
  for (int i = 0; i < M; i++){
        A[i]--; //この考え解答から
        B[i]--;
        board.at(A[i]).at(B[i]) = 'o'; //Aが勝つ
        board.at(B[i]).at(A[i]) = 'x'; //Bが負ける
    }

   for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
        cout << board.at(i).at(j);
        if (j == N-1){
            cout << endl; //行末で改行と同義
        }
        else {
            cout << " "; //改行しないなら空白を出力
        }
    }
   }
}
