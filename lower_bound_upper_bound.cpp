#include <bits/stdc++.h>
using namespace std;

// 昇順にソートされた配列において、「ｘ以上の最小の要素」を求める場合にはSTLのlower_boundを使うことができる
// 同様に「ｘを超える最小の要素」を求めるときにはupper_boundを使うことができる

int main() {
  vector<int> a = {0, 10, 13, 14, 20};
  // aにおいて、12 以上最小の要素は 13
  cout << *lower_bound(a.begin(), a.end(), 12) << endl; // 13

  // 14 以上最小の要素は 14
  cout << *lower_bound(a.begin(), a.end(), 14) << endl; // 14

  // 10 を超える最小の要素は 13
  cout << *upper_bound(a.begin(), a.end(), 10) << endl; // 13
}
