#include <bits/stdc++.h>
using namespace std;


// setの処理が役に立つ時
// 配列の中に出現する値の種類数(重複のない集合の要素数)
// 集合の中にある値が含まれるかを高速に計算する
// 集合の中に含まれる最小値(最大値)を求める
int main() {
  set<int> S;

  S.insert(3);
  S.insert(7);
  S.insert(8);
  S.insert(10);
  // 既に3は含まれているのでこの操作は無視される
  S.insert(3);

  // 集合の要素数を出力
  cout << "size: " << S.size() << endl;

  // 7が含まれるか判定
  if (S.count(7)) {
    cout << "found 7" << endl;
  }
  // 5が含まれるか判定
  if (S.count(5)) {
    cout << "found 5" << endl;
  }

  //最小値の取得
  //*begin(変数)
  //最大値の取得
  //*rbegin(変数)
}
