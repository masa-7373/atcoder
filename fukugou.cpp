#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  // x + 1
  x++;
  cout << x << endl;
  
  // 2.の出力
  // x * (a + b)
  x *= (a + b);
  cout << x << endl;

  // 3.の出力
  // x ** 2
  x *= x;
  cout << x << endl;

  // 4.の出力
  // x - 1
  x -= 1;
  cout << x << endl;
}
