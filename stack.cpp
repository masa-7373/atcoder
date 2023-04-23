#include <bits/stdc++.h>
using namespace std;

// 新しく追加したものほど先に取り出されるような処理を行うデータ構造をスタックという。

int main() {
  stack<int> s;
  s.push(10);
  s.push(1);
  s.push(3);

  cout << s.top() << endl;  // 3 (最後に追加した値)
  s.pop();
  cout << s.top() << endl;  // 1 (その前に追加した値)
}
