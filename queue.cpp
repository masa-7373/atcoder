#include <bits/stdc++.h>
using namespace std;

int main() {
  queue<int> q;
  //要素の追加
  //変数.push(値);
  q.push(10);
  q.push(3);
  q.push(6);
  q.push(1);
  
  //変数.empty()  // キューが空ならtrueを返す
  // 空でない間繰り返す
  while (!q.empty()) {
    cout << q.front() << endl;  // 先頭の値を出力
    q.pop();  // 先頭の値を削除
  }
}
