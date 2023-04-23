#include <bits/stdc++.h>
using namespace std;

int main() {
  priority_queue<int> pq;
  pq.push(10);
  pq.push(3);
  pq.push(6);
  pq.push(1);

  //最大の要素の取得
  //変数.top();
  //最大の要素を削除
  //変数.pop();
  //最小の要素を取り出す
  //priority_queue<型, vector<型>, greater<型>> 変数;

  // 空でない間繰り返す
  while (!pq.empty()) {
    cout << pq.top() << endl;  // 最大の値を出力
    pq.pop();  // 最大の値を削除
  }
}
