#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  // ここにプログラムを追記
  int ans;
  ans = A;

  for (int i = 0; i < N; i++){
    
    //演算子op(i),計算値Biの定義
    char op;
    int B;
    
    cin >> op >> B;

    //演算子の条件式+
    if (op == '+'){
        ans += B;
        cout << i + 1 << ":" << ans << endl;
    }

    //演算子の条件式-
    if (op == '-'){
        ans -= B;
        cout << i + 1 << ":" << ans << endl;
    }

     //演算子の条件式*
    if (op == '*'){
        ans *= B;
        cout << i + 1 << ":" << ans << endl;
    }

     //演算子の条件式/
    if (op == '/'){
        if ( B == 0 ){
            cout << "error" << endl;
            break;
        }
        ans /= B;
        cout << i + 1 << ":" << ans << endl;
    }
  }
}
