#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S; /*りんご。バナナを売られている個数がN個、購入金額がS円*/
  cin >> N >> S;
  vector<int> A(N), P(N); /*A[i]がそれぞれのりんごの値段、P[i]がパイナップルのそれぞれの値段*/
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
  // ここにプログラムを追記
  int count = 0;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
        if (S == A.at(i) + P.at(j)){
            count++;
        }
    }
  }
  cout << count << endl;

}
